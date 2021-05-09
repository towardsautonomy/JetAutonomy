// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from jet_autonomy_msgs:msg/JetDriveCmd.idl
// generated code does not contain a copyright notice

#ifndef JET_AUTONOMY_MSGS__MSG__JET_DRIVE_CMD__TRAITS_HPP_
#define JET_AUTONOMY_MSGS__MSG__JET_DRIVE_CMD__TRAITS_HPP_

#include "jet_autonomy_msgs/msg/jet_drive_cmd__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<jet_autonomy_msgs::msg::JetDriveCmd>()
{
  return "jet_autonomy_msgs::msg::JetDriveCmd";
}

template<>
struct has_fixed_size<jet_autonomy_msgs::msg::JetDriveCmd>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<jet_autonomy_msgs::msg::JetDriveCmd>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

}  // namespace rosidl_generator_traits

#endif  // JET_AUTONOMY_MSGS__MSG__JET_DRIVE_CMD__TRAITS_HPP_
