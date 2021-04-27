# JetAutonomy: Autonomous Driving Software Stack based on JetRacer Platform

## Hardware Details

1. Camera: IMX219 Camera, 800 megapixels and 160 FOV
    - More Details: https://www.waveshare.com/wiki/IMX219-160_Camera
    
## Setting up a Remote Master URI

Add the following code in `~/.bashrc` of JetRacer. 

```
export ROS_MASTER_URI=http://{JetRacer IP}:11311
export ROS_IP={JetRacer IP}
```

Add the following code in `~/.bashrc` of Remote Machine. 

```
export ROS_MASTER_URI=http://{JetRacer IP}:11311
export ROS_IP={Remote Machine IP}
```

## Teleoperation

For teleoperation using *Gamepad*, run the script ```scripts/teleoperation.py```. This can also be setup to run at startup as:  

```
chmod +x scripts/jetautonomy_startup.sh
sudo cp jetautonomy_startup.service /etc/systemd/system/ 
sudo systemctl enable jetautonomy_startup
sudo systemctl start jetautonomy_startup
```
