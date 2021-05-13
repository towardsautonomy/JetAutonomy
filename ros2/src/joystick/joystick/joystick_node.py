#!/usr/bin/python3

import rclpy
from rclpy.node import Node
from jetpilot_msgs.msg import JoystickCmd
from joystick.gamepad import Joystick

class JoystickNode(Node):

    def __init__(self):
        super().__init__('joystick_node')
        self.publisher_ = self.create_publisher(JoystickCmd, '/joystick/cmd', 10)

        # initialize joystick
        self.js = Joystick()
        self.get_logger().info('Joystick initialized.')
        self.i = 0
        # spin the node
        self.spin()

    def spin(self):
        auto_drive_enabled, manual_drive_enabled = False, False
        steering, throttle = 0., 0.
        while rclpy.ok():
            js_cmd = JoystickCmd()

            # get joystick state
            js_state = self.js.spin_once()
            
            if js_state['button'] == 'start' and js_state['button_val']:
                manual_drive_enabled = not manual_drive_enabled
                self.get_logger().info('Manual drive {}'.format('enabled' if manual_drive_enabled else 'disabled'))
            
            elif js_state['button'] == 'select' and js_state['button_val']:
                auto_drive_enabled = not auto_drive_enabled
                self.get_logger().info('Auto drive {}'.format('enabled' if manual_drive_enabled else 'disabled'))
            
            if manual_drive_enabled:
                auto_drive_enabled = False
                if js_state['axis'] == 'y':
                    throttle = -js_state['axis_val'] # this axis is flipped
                if js_state['axis'] == 'z' or js_state['axis'] == 'x':
                    steering = js_state['axis_val']
            else:
                throttle, steering = 0., 0.
                # disable auto drive if any button is pressed
                auto_drive_enabled = False

            js_cmd.header.stamp = self.get_clock().now().to_msg()
            js_cmd.header.frame_id = 'joystick'
            js_cmd.auto_drive_enabled = auto_drive_enabled
            js_cmd.manual_drive_enabled = manual_drive_enabled
            js_cmd.steering = steering
            js_cmd.throttle = throttle

            # pyblish the joystick command
            self.publisher_.publish(js_cmd)
            # rate.sleep()
            self.i += 1

def main(args=None):
    rclpy.init(args=args)

    joystick_node = JoystickNode()

    rclpy.spin(joystick_node)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    joystick_node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()