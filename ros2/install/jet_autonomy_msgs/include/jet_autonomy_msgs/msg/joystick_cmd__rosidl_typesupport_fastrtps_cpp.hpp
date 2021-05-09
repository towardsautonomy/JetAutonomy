// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from jet_autonomy_msgs:msg/JoystickCmd.idl
// generated code does not contain a copyright notice

#ifndef JET_AUTONOMY_MSGS__MSG__JOYSTICK_CMD__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define JET_AUTONOMY_MSGS__MSG__JOYSTICK_CMD__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "jet_autonomy_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "jet_autonomy_msgs/msg/joystick_cmd__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace jet_autonomy_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_jet_autonomy_msgs
cdr_serialize(
  const jet_autonomy_msgs::msg::JoystickCmd & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_jet_autonomy_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  jet_autonomy_msgs::msg::JoystickCmd & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_jet_autonomy_msgs
get_serialized_size(
  const jet_autonomy_msgs::msg::JoystickCmd & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_jet_autonomy_msgs
max_serialized_size_JoystickCmd(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace jet_autonomy_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_jet_autonomy_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, jet_autonomy_msgs, msg, JoystickCmd)();

#ifdef __cplusplus
}
#endif

#endif  // JET_AUTONOMY_MSGS__MSG__JOYSTICK_CMD__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
