// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dome_interfaces:msg/Action.idl
// generated code does not contain a copyright notice

#ifndef DOME_INTERFACES__MSG__ACTION__STRUCT_H_
#define DOME_INTERFACES__MSG__ACTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'action'
#include "rosidl_generator_c/string.h"

// Struct defined in msg/Action in the package dome_interfaces.
typedef struct dome_interfaces__msg__Action
{
  rosidl_generator_c__String action;
} dome_interfaces__msg__Action;

// Struct for a sequence of dome_interfaces__msg__Action.
typedef struct dome_interfaces__msg__Action__Sequence
{
  dome_interfaces__msg__Action * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dome_interfaces__msg__Action__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DOME_INTERFACES__MSG__ACTION__STRUCT_H_
