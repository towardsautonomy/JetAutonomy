// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from jet_autonomy_msgs:msg/JoystickCmd.idl
// generated code does not contain a copyright notice
#include "jet_autonomy_msgs/msg/joystick_cmd__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "jet_autonomy_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "jet_autonomy_msgs/msg/joystick_cmd__struct.h"
#include "jet_autonomy_msgs/msg/joystick_cmd__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "std_msgs/msg/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_jet_autonomy_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_jet_autonomy_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_jet_autonomy_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _JoystickCmd__ros_msg_type = jet_autonomy_msgs__msg__JoystickCmd;

static bool _JoystickCmd__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _JoystickCmd__ros_msg_type * ros_message = static_cast<const _JoystickCmd__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: manual_drive_enabled
  {
    cdr << (ros_message->manual_drive_enabled ? true : false);
  }

  // Field name: auto_drive_enabled
  {
    cdr << (ros_message->auto_drive_enabled ? true : false);
  }

  // Field name: steering
  {
    cdr << ros_message->steering;
  }

  // Field name: throttle
  {
    cdr << ros_message->throttle;
  }

  return true;
}

static bool _JoystickCmd__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _JoystickCmd__ros_msg_type * ros_message = static_cast<_JoystickCmd__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: manual_drive_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->manual_drive_enabled = tmp ? true : false;
  }

  // Field name: auto_drive_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->auto_drive_enabled = tmp ? true : false;
  }

  // Field name: steering
  {
    cdr >> ros_message->steering;
  }

  // Field name: throttle
  {
    cdr >> ros_message->throttle;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_jet_autonomy_msgs
size_t get_serialized_size_jet_autonomy_msgs__msg__JoystickCmd(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _JoystickCmd__ros_msg_type * ros_message = static_cast<const _JoystickCmd__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name manual_drive_enabled
  {
    size_t item_size = sizeof(ros_message->manual_drive_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name auto_drive_enabled
  {
    size_t item_size = sizeof(ros_message->auto_drive_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name steering
  {
    size_t item_size = sizeof(ros_message->steering);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name throttle
  {
    size_t item_size = sizeof(ros_message->throttle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _JoystickCmd__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_jet_autonomy_msgs__msg__JoystickCmd(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_jet_autonomy_msgs
size_t max_serialized_size_jet_autonomy_msgs__msg__JoystickCmd(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Header(
        full_bounded, current_alignment);
    }
  }
  // member: manual_drive_enabled
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: auto_drive_enabled
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: steering
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: throttle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _JoystickCmd__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_jet_autonomy_msgs__msg__JoystickCmd(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_JoystickCmd = {
  "jet_autonomy_msgs::msg",
  "JoystickCmd",
  _JoystickCmd__cdr_serialize,
  _JoystickCmd__cdr_deserialize,
  _JoystickCmd__get_serialized_size,
  _JoystickCmd__max_serialized_size
};

static rosidl_message_type_support_t _JoystickCmd__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_JoystickCmd,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, jet_autonomy_msgs, msg, JoystickCmd)() {
  return &_JoystickCmd__type_support;
}

#if defined(__cplusplus)
}
#endif
