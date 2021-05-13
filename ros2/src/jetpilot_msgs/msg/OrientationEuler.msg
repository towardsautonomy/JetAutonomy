# roll, pitch, and yaw are in degrees
# set the first element of `orientation_covariances` to -1 if they are unknown

std_msgs/Header header
float64 roll
float64 pitch
float64 yaw
float64[9] orientation_covariances