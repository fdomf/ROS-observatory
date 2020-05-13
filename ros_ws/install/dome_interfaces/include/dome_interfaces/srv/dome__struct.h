// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dome_interfaces:srv/Dome.idl
// generated code does not contain a copyright notice

#ifndef DOME_INTERFACES__SRV__DOME__STRUCT_H_
#define DOME_INTERFACES__SRV__DOME__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'dome_action'
#include "rosidl_generator_c/string.h"

// Struct defined in srv/Dome in the package dome_interfaces.
typedef struct dome_interfaces__srv__Dome_Request
{
  rosidl_generator_c__String dome_action;
} dome_interfaces__srv__Dome_Request;

// Struct for a sequence of dome_interfaces__srv__Dome_Request.
typedef struct dome_interfaces__srv__Dome_Request__Sequence
{
  dome_interfaces__srv__Dome_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dome_interfaces__srv__Dome_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'dome_response'
// already included above
// #include "rosidl_generator_c/string.h"

// Struct defined in srv/Dome in the package dome_interfaces.
typedef struct dome_interfaces__srv__Dome_Response
{
  rosidl_generator_c__String dome_response;
} dome_interfaces__srv__Dome_Response;

// Struct for a sequence of dome_interfaces__srv__Dome_Response.
typedef struct dome_interfaces__srv__Dome_Response__Sequence
{
  dome_interfaces__srv__Dome_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dome_interfaces__srv__Dome_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DOME_INTERFACES__SRV__DOME__STRUCT_H_
