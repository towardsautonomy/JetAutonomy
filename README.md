# JetAutonomy: Autonomous Driving Software Stack based on JetRacer Platform

## Get Started  

### Build JetAutonomy  

```
source ~/ros2_dashing/install/setup.bash
git clone https://github.com/towardsautonomy/JetAutonomy.git --recursive
cd JetAutonomy/ros2
colcon build
```

### Launch JetAutonomy  

```
source install/setup.bash
ros2 launch jet_drive jet_autonomy.launch.py
```

### Launch JetAutonomy on startup

```
chmod +x scripts/jetautonomy_startup.sh
sudo cp scripts/jetautonomy_startup.service /etc/systemd/system/ 
sudo systemctl enable jetautonomy_startup
sudo systemctl start jetautonomy_startup
```
## Modules and Individual Packages

1. Camera: `IMX219 Camera, 800 megapixels and 160 FOV`
    - More Details: https://www.waveshare.com/wiki/IMX219-160_Camera  
    - Running this node: ```ros2 launch front_cam front_cam_node.launch.py```  
    - This node publishes the msg `sensor_msgs/Image` on topic `/front_cam/rgb`  
    
1. RPLIDAR A2  
    - ros2 package being used for this device is [here](https://github.com/youngday/rplidar_ros2)
    - This device needs access to `/dev/ttyUSB0`. This can be done by adding the user to the group `dialout`.  
      ```sudo adduser jetson dialout``` followed by a reboot.
    - Running this node: ```ros2 run rplidar_ros rplidarNode```.
    - This node publishes the msg `sensor_msgs/LidarScan` on topic `/scan`

1. Gamepad
    - This is used for sending commands to the JetRacer.  
    - Controls:  
      ```
      Select      : Toggles auto-driving on/off
      Start       : Toggles manual-driving on/off
      Left Stick  : Up/Down for +ve/-ve Acceleration
                    Left/Right for Left/Right Steering
      Right Stick : Left/Right for Left/Right Steering
      ```  
    - Running this node: ```ros2 launch joystick joystick_node.launch.py``` 
    
1. Jet Drive Moderator  
    - This is responsible for moderating the `steering` and `throttle` commands sent to the JetRacer.  
    - Running this node: ```ros2 launch jet_drive_moderator jet_drive_moderator_node.launch.py``` 
    
1. Jet Drive
    - This module is responsible for applying `steering` and `throttle` to the JetRacer.  
    - Running this node: ```ros2 launch jet_drive jet_drive_node.launch.py``` 
    - For other sensor frames to world transforms, run: ```ros2 launch jet_drive frame_transforms.launch.py``` 
    - Launch the complete stack: ```ros2 launch jet_drive jet_autonomy.launch.py``` 
    - If monitoring these nodes from a different device, run this command on the guest machine for transforms:  
      ```
      ros2 run tf2_ros static_transform_publisher 0 0 0 0 0 0  world laser_frame
      ros2 run tf2_ros static_transform_publisher 0 0 0 0 0 0  world camera_frame
      ```

## Teleoperation without ROS2 dependency

For teleoperation using *Gamepad*, run the script ```scripts/teleoperation.py```. This can also be setup to run at startup as:  

```
sudo cp scripts/teleoperation_startup.service /etc/systemd/system/ 
sudo systemctl enable teleoperation_startup
sudo systemctl start teleoperation_startup
```