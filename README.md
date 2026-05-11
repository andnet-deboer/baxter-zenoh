## Setup steps

1. 
```
docker build -t baxter_bridge:latest .
```

2. 
```
docker run --rm --network=host -t baxter_bridge:latest .
```

3.
```
sudo apt install ros-$ROS_DISTRO-rmw-zenoh-cpp
```

4. In a separate terminal on your laptop, source the ROS 2 workspace
```
source /opt/ros/kilted/setup.bash

unset ROS_DOMAIN_ID
export RMW_IMPLEMENTATION=rmw_zenoh_cpp

cd ~/host-ws/
colcon build
source install/setup.bash

run rviz2 or rqt
```