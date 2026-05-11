## Setup steps

1. 
```
docker build -t baxter_bridge:latest .
```

2. 
```
docker run --rm --network=host -t baxter_bridge:latest .
```

3. In a separate terminal on your laptop, source the ROS 2 workspace
```
source /opt/ros/kilted/setup.bash

cd ~/host-ws/
colcon build
source install/setup.bash

run rviz2 or rqt
```


