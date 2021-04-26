# JetAutonomy: Autonomous Driving Software Stack based on JetRacer Platform

## Teleoperation

For teleoperation using the *Gamepad*, run the script ```scripts/teleoperation.py```. This can also be setup to run at startup as:  

```
chmod +x scripts/jetautonomy_startup.sh
sudo cp jetautonomy_startup.service /etc/systemd/system/ 
sudo systemctl enable jetautonomy_startup.service
sudo systemctl start jetautonomy_startup.service
```
