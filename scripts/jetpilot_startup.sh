#!/bin/bash

# source ros environment
source /home/jetson/ros2_dashing/install/setup.bash
source /home/jetson/JetPilot/ros2/install/setup.bash

# launch the complete stack
ros2 launch jet_drive jet_pilot.launch.py
