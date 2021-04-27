#!/usr/bin/python3

import os
import sys
sys.path.append(os.path.abspath('../'))

from jetracer.nvidia_racecar import NvidiaRacecar
from drivers import Joystick

# config parameters
steering_gain = 0.7
steering_offset = 0.0

throttle_gain = 0.5
throttle_offset = 0.0

# main function
if __name__ == '__main__':
    # initialize car
    car = NvidiaRacecar()
    car.steering_gain = steering_gain
    car.steering_offset = steering_offset
    car.throttle_gain = throttle_gain
    car.throttle_offset = throttle_offset
    print('Car initialized.')
    
    # initialize joystick
    js = Joystick()
    print('Joystick initialized.')
    
    teleop_enabled = False
    # wait for teleoperation to be enabled
    while True:
        
        # get joystick state
        js_state = js.spin_once()
        
        if js_state['button'] == 'start' and js_state['button_val']:
            teleop_enabled = not teleop_enabled
            print('Teleoperation {}'.format('enabled' if teleop_enabled else 'disabled'))
        
        if teleop_enabled:
            if js_state['axis'] == 'y':
                throttle = js_state['axis_val']
                car.throttle = -throttle
            if js_state['axis'] == 'z' or js_state['axis'] == 'x':
                steering = js_state['axis_val']
                car.steering = steering