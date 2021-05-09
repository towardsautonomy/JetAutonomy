// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from jet_autonomy_msgs:msg/JoystickCmd.idl
// generated code does not contain a copyright notice

#ifndef JET_AUTONOMY_MSGS__MSG__JOYSTICK_CMD__FUNCTIONS_H_
#define JET_AUTONOMY_MSGS__MSG__JOYSTICK_CMD__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "jet_autonomy_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "jet_autonomy_msgs/msg/joystick_cmd__struct.h"

/// Initialize msg/JoystickCmd message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * jet_autonomy_msgs__msg__JoystickCmd
 * )) before or use
 * jet_autonomy_msgs__msg__JoystickCmd__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_jet_autonomy_msgs
bool
jet_autonomy_msgs__msg__JoystickCmd__init(jet_autonomy_msgs__msg__JoystickCmd * msg);

/// Finalize msg/JoystickCmd message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_jet_autonomy_msgs
void
jet_autonomy_msgs__msg__JoystickCmd__fini(jet_autonomy_msgs__msg__JoystickCmd * msg);

/// Create msg/JoystickCmd message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * jet_autonomy_msgs__msg__JoystickCmd__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_jet_autonomy_msgs
jet_autonomy_msgs__msg__JoystickCmd *
jet_autonomy_msgs__msg__JoystickCmd__create();

/// Destroy msg/JoystickCmd message.
/**
 * It calls
 * jet_autonomy_msgs__msg__JoystickCmd__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_jet_autonomy_msgs
void
jet_autonomy_msgs__msg__JoystickCmd__destroy(jet_autonomy_msgs__msg__JoystickCmd * msg);


/// Initialize array of msg/JoystickCmd messages.
/**
 * It allocates the memory for the number of elements and calls
 * jet_autonomy_msgs__msg__JoystickCmd__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_jet_autonomy_msgs
bool
jet_autonomy_msgs__msg__JoystickCmd__Sequence__init(jet_autonomy_msgs__msg__JoystickCmd__Sequence * array, size_t size);

/// Finalize array of msg/JoystickCmd messages.
/**
 * It calls
 * jet_autonomy_msgs__msg__JoystickCmd__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_jet_autonomy_msgs
void
jet_autonomy_msgs__msg__JoystickCmd__Sequence__fini(jet_autonomy_msgs__msg__JoystickCmd__Sequence * array);

/// Create array of msg/JoystickCmd messages.
/**
 * It allocates the memory for the array and calls
 * jet_autonomy_msgs__msg__JoystickCmd__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_jet_autonomy_msgs
jet_autonomy_msgs__msg__JoystickCmd__Sequence *
jet_autonomy_msgs__msg__JoystickCmd__Sequence__create(size_t size);

/// Destroy array of msg/JoystickCmd messages.
/**
 * It calls
 * jet_autonomy_msgs__msg__JoystickCmd__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_jet_autonomy_msgs
void
jet_autonomy_msgs__msg__JoystickCmd__Sequence__destroy(jet_autonomy_msgs__msg__JoystickCmd__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // JET_AUTONOMY_MSGS__MSG__JOYSTICK_CMD__FUNCTIONS_H_
