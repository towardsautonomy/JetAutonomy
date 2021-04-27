#!/usr/bin/python

import rospy
from jet_autonomy_msgs.msg import joystick_cmd
from gamepad import Joystick

class JoystickNode(object):
    def __init__(self):

        # Get the parameters
        self.steering_gain = rospy.get_param('~steering_gain', 0.7)
        self.steering_offset = rospy.get_param('~steering_offset', 0.0)

        self.throttle_gain = rospy.get_param('~throttle_gain', 0.5)
        self.throttle_offset = rospy.get_param('~throttle_offset', 0.0)

        # define publishers
        self.js_pub = rospy.Publisher('/joystick/cmd/', joystick_cmd, queue_size=10)

        # initialize node
        rospy.init_node('joystick_node')

        # initialize joystick
        self.js = Joystick()
        rospy.loginfo('Joystick initialized.')
        
    def spin(self):
        rate = rospy.Rate(100) # 100hz
        teleop_enabled = False
        steering, throttle = 0., 0.
        while not rospy.is_shutdown():
            js_cmd = joystick_cmd()

            # get joystick state
            js_state = self.js.spin_once()
            
            if js_state['button'] == 'start' and js_state['button_val']:
                teleop_enabled = not teleop_enabled
                rospy.loginfo('Teleoperation {}'.format('enabled' if teleop_enabled else 'disabled'))
            
            if teleop_enabled:
                if js_state['axis'] == 'y':
                    throttle = -js_state['axis_val'] # this axis is flipped
                if js_state['axis'] == 'z' or js_state['axis'] == 'x':
                    steering = js_state['axis_val']
            else:
                throttle, steering = 0., 0.

            js_cmd.header.stamp = rospy.Time.now()
            js_cmd.header.frame_id = 'joystick'
            js_cmd.enabled = teleop_enabled
            js_cmd.steering = steering
            js_cmd.throttle = throttle

            # pyblish the joystick command
            self.js_pub.publish(js_cmd)
            rate.sleep()

if __name__ == '__main__':
    try:
        jn = JoystickNode()
        jn.spin()

    except rospy.ROSInterruptException:
        rospy.logerr('Could not start joystick node.')