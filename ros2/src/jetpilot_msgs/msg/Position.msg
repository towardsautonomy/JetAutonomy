# x, y, z are in meters
# set the first element of `position_covariances` to -1 if they are unknown

std_msgs/Header header
float64 x
float64 y
float64 z
float64[9] position_covariances