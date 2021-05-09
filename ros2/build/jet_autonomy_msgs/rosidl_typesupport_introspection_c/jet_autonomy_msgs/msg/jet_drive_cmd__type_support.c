// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from jet_autonomy_msgs:msg/JetDriveCmd.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "jet_autonomy_msgs/msg/jet_drive_cmd__rosidl_typesupport_introspection_c.h"
#include "jet_autonomy_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "jet_autonomy_msgs/msg/jet_drive_cmd__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember JetDriveCmd__rosidl_typesupport_introspection_c__JetDriveCmd_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(jet_autonomy_msgs__msg__JetDriveCmd, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "steering",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(jet_autonomy_msgs__msg__JetDriveCmd, steering),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "throttle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(jet_autonomy_msgs__msg__JetDriveCmd, throttle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers JetDriveCmd__rosidl_typesupport_introspection_c__JetDriveCmd_message_members = {
  "jet_autonomy_msgs__msg",  // message namespace
  "JetDriveCmd",  // message name
  3,  // number of fields
  sizeof(jet_autonomy_msgs__msg__JetDriveCmd),
  JetDriveCmd__rosidl_typesupport_introspection_c__JetDriveCmd_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t JetDriveCmd__rosidl_typesupport_introspection_c__JetDriveCmd_message_type_support_handle = {
  0,
  &JetDriveCmd__rosidl_typesupport_introspection_c__JetDriveCmd_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_jet_autonomy_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, jet_autonomy_msgs, msg, JetDriveCmd)() {
  JetDriveCmd__rosidl_typesupport_introspection_c__JetDriveCmd_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!JetDriveCmd__rosidl_typesupport_introspection_c__JetDriveCmd_message_type_support_handle.typesupport_identifier) {
    JetDriveCmd__rosidl_typesupport_introspection_c__JetDriveCmd_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &JetDriveCmd__rosidl_typesupport_introspection_c__JetDriveCmd_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
