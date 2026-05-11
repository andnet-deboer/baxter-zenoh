#!/usr/bin/env bash
set -e

source /opt/ros/one/setup.bash
source /ros1_ws/devel/setup.bash
source /opt/ros/kilted/setup.bash
source /ros2_ws/install/setup.bash
source /bridge_ws/install/local_setup.bash

export ROS_MASTER_URI=http://10.42.0.2:11311
export ROS_IP=10.42.0.1
unset ROS_HOSTNAME

export RMW_IMPLEMENTATION=rmw_zenoh_cpp

# Build parameter_bridge argument list from bridge_topics.yaml
# ros2_to_ros1 → topic@ros2_type[ros1_type
# ros1_to_ros2 → topic@ros2_type]ros1_type
mapfile -t TOPICS < <(python3 - <<'EOF'
import yaml, sys
with open("/bridge_topics.yaml") as f:
    cfg = yaml.safe_load(f)
for e in cfg.get("ros2_to_ros1", []):
    print(f"{e['topic']}@{e['ros2']}[{e['ros1']}")
for e in cfg.get("ros1_to_ros2", []):
    print(f"{e['topic']}@{e['ros2']}]{e['ros1']}")
EOF
)

exec ros2 run ros1_bridge parameter_bridge "${TOPICS[@]}"
