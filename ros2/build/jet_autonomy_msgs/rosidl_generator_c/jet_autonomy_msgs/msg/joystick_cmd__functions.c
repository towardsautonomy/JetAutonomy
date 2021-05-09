// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from jet_autonomy_msgs:msg/JoystickCmd.idl
// generated code does not contain a copyright notice
#include "jet_autonomy_msgs/msg/joystick_cmd__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header__functions.h"

bool
jet_autonomy_msgs__msg__JoystickCmd__init(jet_autonomy_msgs__msg__JoystickCmd * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    jet_autonomy_msgs__msg__JoystickCmd__fini(msg);
    return false;
  }
  // manual_drive_enabled
  // auto_drive_enabled
  // steering
  // throttle
  return true;
}

void
jet_autonomy_msgs__msg__JoystickCmd__fini(jet_autonomy_msgs__msg__JoystickCmd * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // manual_drive_enabled
  // auto_drive_enabled
  // steering
  // throttle
}

jet_autonomy_msgs__msg__JoystickCmd *
jet_autonomy_msgs__msg__JoystickCmd__create()
{
  jet_autonomy_msgs__msg__JoystickCmd * msg = (jet_autonomy_msgs__msg__JoystickCmd *)malloc(sizeof(jet_autonomy_msgs__msg__JoystickCmd));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(jet_autonomy_msgs__msg__JoystickCmd));
  bool success = jet_autonomy_msgs__msg__JoystickCmd__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
jet_autonomy_msgs__msg__JoystickCmd__destroy(jet_autonomy_msgs__msg__JoystickCmd * msg)
{
  if (msg) {
    jet_autonomy_msgs__msg__JoystickCmd__fini(msg);
  }
  free(msg);
}


bool
jet_autonomy_msgs__msg__JoystickCmd__Sequence__init(jet_autonomy_msgs__msg__JoystickCmd__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  jet_autonomy_msgs__msg__JoystickCmd * data = NULL;
  if (size) {
    data = (jet_autonomy_msgs__msg__JoystickCmd *)calloc(size, sizeof(jet_autonomy_msgs__msg__JoystickCmd));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = jet_autonomy_msgs__msg__JoystickCmd__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        jet_autonomy_msgs__msg__JoystickCmd__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
jet_autonomy_msgs__msg__JoystickCmd__Sequence__fini(jet_autonomy_msgs__msg__JoystickCmd__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      jet_autonomy_msgs__msg__JoystickCmd__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

jet_autonomy_msgs__msg__JoystickCmd__Sequence *
jet_autonomy_msgs__msg__JoystickCmd__Sequence__create(size_t size)
{
  jet_autonomy_msgs__msg__JoystickCmd__Sequence * array = (jet_autonomy_msgs__msg__JoystickCmd__Sequence *)malloc(sizeof(jet_autonomy_msgs__msg__JoystickCmd__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = jet_autonomy_msgs__msg__JoystickCmd__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
jet_autonomy_msgs__msg__JoystickCmd__Sequence__destroy(jet_autonomy_msgs__msg__JoystickCmd__Sequence * array)
{
  if (array) {
    jet_autonomy_msgs__msg__JoystickCmd__Sequence__fini(array);
  }
  free(array);
}
