// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from jet_autonomy_msgs:msg/JetDriveCmd.idl
// generated code does not contain a copyright notice

#ifndef JET_AUTONOMY_MSGS__MSG__JET_DRIVE_CMD__STRUCT_H_
#define JET_AUTONOMY_MSGS__MSG__JET_DRIVE_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/header__struct.h"

// Struct defined in msg/JetDriveCmd in the package jet_autonomy_msgs.
typedef struct jet_autonomy_msgs__msg__JetDriveCmd
{
  std_msgs__msg__Header header;
  float steering;
  float throttle;
} jet_autonomy_msgs__msg__JetDriveCmd;

// Struct for a sequence of jet_autonomy_msgs__msg__JetDriveCmd.
typedef struct jet_autonomy_msgs__msg__JetDriveCmd__Sequence
{
  jet_autonomy_msgs__msg__JetDriveCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} jet_autonomy_msgs__msg__JetDriveCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // JET_AUTONOMY_MSGS__MSG__JET_DRIVE_CMD__STRUCT_H_
