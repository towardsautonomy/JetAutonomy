# SPDX-FileCopyrightText: 2021 ladyada for Adafruit Industries
# SPDX-License-Identifier: MIT
# Install required tools: sudo apt-get install libi2c-dev i2c-tools
# Check that the device is connected properly: sudo i2cdetect -y -r [0|1] (you should see an entry 0x28)
# Install the BNO055 Library as: sudo pip3 install adafruit-circuitpython-bno055

import time
from adafruit_extended_bus import ExtendedI2C as I2C
import adafruit_bno055

bus_id = 0
i2c = I2C(bus_id)
sensor = adafruit_bno055.BNO055_I2C(i2c)

# If you are going to use UART uncomment these lines
# uart = board.UART()
# sensor = adafruit_bno055.BNO055_UART(uart)

last_val = 0xFFFF

def temperature():
    global last_val  # pylint: disable=global-statement
    result = sensor.temperature
    if abs(result - last_val) == 128:
        result = sensor.temperature
        if abs(result - last_val) == 128:
            return 0b00111111 & result
    last_val = result
    return result

while(not sensor.calibrated):
    time.sleep(0.1)
    print('calibration status: [sys, gyro, accel, mag] {}'.format(sensor.calibration_status))
print('calibration done!')

while True:
    print("Temperature: {} degrees C".format(sensor.temperature))
    """
    print(
        "Temperature: {} degrees C".format(temperature())
    )  # Uncomment if using a Raspberry Pi
    """
    print("Accelerometer (m/s^2): {}".format(sensor.acceleration))
    print("Magnetometer (microteslas): {}".format(sensor.magnetic))
    print("Gyroscope (rad/sec): {}".format(sensor.gyro))
    print("Euler angle: {}".format(sensor.euler))
    print("Quaternion: {}".format(sensor.quaternion))
    print("Linear acceleration (m/s^2): {}".format(sensor.linear_acceleration))
    print("Gravity (m/s^2): {}".format(sensor.gravity))
    print()

    time.sleep(1) # min can be 0.01 corresponding to 100Hz
