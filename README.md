# JetPilot: Autonomous Driving Software Stack based on JetRacer Platform

## Get Started  

### Build JetPilot  

```
git clone https://github.com/towardsautonomy/JetPilot.git --recursive
cd JetPilot/ros2
source ~/ros2_dashing/install/setup.bash
colcon build
```

### Launch JetPilot  

```
cd JetPilot/ros2
source install/setup.bash
ros2 launch jet_drive jet_pilot.launch.py
```

### Launch JetPilot on startup

```
chmod +x scripts/jetpilot_startup.sh
sudo cp scripts/jetpilot_startup.service /etc/systemd/system/ 
sudo systemctl enable jetpilot_startup
sudo systemctl start jetpilot_startup
```
## Modules and Individual Packages

1. Camera: `IMX219-160 Camera`
    - More Details: https://www.waveshare.com/wiki/IMX219-160_Camera  
    - Running this node: ```ros2 launch front_cam front_cam_node.launch.py```  
    - This node publishes the msg `sensor_msgs/Image` on topic `/front_cam/rgb`  
    
1. RPLIDAR A2  
    - ros2 package being used for this device is a modified version of [this](https://github.com/youngday/rplidar_ros2)
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

1. IMU - Adafruit BNO055
    - This module uses the [Adafruit_Python_Extended_Bus](https://github.com/adafruit/Adafruit_Python_Extended_Bus) library which needs to be installed separately.
    - Running this node: ```ros2 launch imu_bno055 imu_bno055_node.launch.py``` 
    
1. Jet Drive Moderator  
    - This is responsible for moderating the `steering` and `throttle` commands sent to the JetRacer.  
    - Running this node: ```ros2 launch jet_drive_moderator jet_drive_moderator_node.launch.py``` 
    
1. Jet Drive
    - This module is responsible for applying `steering` and `throttle` to the JetRacer.  
    - Running this node: ```ros2 launch jet_drive jet_drive_node.launch.py``` 
    - For other sensor frames to base link transforms, run: ```ros2 launch jet_drive frame_transforms.launch.py``` 
    - Launch the complete stack: ```ros2 launch jet_drive jet_pilot.launch.py``` 

## Teleoperation without ROS2 dependency

For teleoperation using *Gamepad*, run the script ```scripts/teleoperation.py```. This can also be setup to run at startup as:  

```
sudo cp scripts/teleoperation_startup.service /etc/systemd/system/ 
sudo systemctl enable teleoperation_startup
sudo systemctl start teleoperation_startup
```
