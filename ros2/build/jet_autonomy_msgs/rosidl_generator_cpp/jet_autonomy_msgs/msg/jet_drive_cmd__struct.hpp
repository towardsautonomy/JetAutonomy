// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from jet_autonomy_msgs:msg/JetDriveCmd.idl
// generated code does not contain a copyright notice

#ifndef JET_AUTONOMY_MSGS__MSG__JET_DRIVE_CMD__STRUCT_HPP_
#define JET_AUTONOMY_MSGS__MSG__JET_DRIVE_CMD__STRUCT_HPP_

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

// Protect against ERROR being predefined on Windows, in case somebody defines a
// constant by that name.
#if defined(_WIN32)
  #if defined(ERROR)
    #undef ERROR
  #endif
  #if defined(NO_ERROR)
    #undef NO_ERROR
  #endif
#endif

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__jet_autonomy_msgs__msg__JetDriveCmd __attribute__((deprecated))
#else
# define DEPRECATED__jet_autonomy_msgs__msg__JetDriveCmd __declspec(deprecated)
#endif

namespace jet_autonomy_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct JetDriveCmd_
{
  using Type = JetDriveCmd_<ContainerAllocator>;

  explicit JetDriveCmd_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->steering = 0.0f;
      this->throttle = 0.0f;
    }
  }

  explicit JetDriveCmd_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->steering = 0.0f;
      this->throttle = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _steering_type =
    float;
  _steering_type steering;
  using _throttle_type =
    float;
  _throttle_type throttle;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__steering(
    const float & _arg)
  {
    this->steering = _arg;
    return *this;
  }
  Type & set__throttle(
    const float & _arg)
  {
    this->throttle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    jet_autonomy_msgs::msg::JetDriveCmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const jet_autonomy_msgs::msg::JetDriveCmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<jet_autonomy_msgs::msg::JetDriveCmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<jet_autonomy_msgs::msg::JetDriveCmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      jet_autonomy_msgs::msg::JetDriveCmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<jet_autonomy_msgs::msg::JetDriveCmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      jet_autonomy_msgs::msg::JetDriveCmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<jet_autonomy_msgs::msg::JetDriveCmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<jet_autonomy_msgs::msg::JetDriveCmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<jet_autonomy_msgs::msg::JetDriveCmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__jet_autonomy_msgs__msg__JetDriveCmd
    std::shared_ptr<jet_autonomy_msgs::msg::JetDriveCmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__jet_autonomy_msgs__msg__JetDriveCmd
    std::shared_ptr<jet_autonomy_msgs::msg::JetDriveCmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JetDriveCmd_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->steering != other.steering) {
      return false;
    }
    if (this->throttle != other.throttle) {
      return false;
    }
    return true;
  }
  bool operator!=(const JetDriveCmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JetDriveCmd_

// alias to use template instance with default allocator
using JetDriveCmd =
  jet_autonomy_msgs::msg::JetDriveCmd_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace jet_autonomy_msgs

#endif  // JET_AUTONOMY_MSGS__MSG__JET_DRIVE_CMD__STRUCT_HPP_
