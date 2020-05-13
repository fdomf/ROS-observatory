// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dome_interfaces:srv/Telescope.idl
// generated code does not contain a copyright notice

#ifndef DOME_INTERFACES__SRV__TELESCOPE__STRUCT_H_
#define DOME_INTERFACES__SRV__TELESCOPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'telescope_action'
#include "rosidl_generator_c/string.h"

// Struct defined in srv/Telescope in the package dome_interfaces.
typedef struct dome_interfaces__srv__Telescope_Request
{
  rosidl_generator_c__String telescope_action;
  double alt;
  double az;
} dome_interfaces__srv__Telescope_Request;

// Struct for a sequence of dome_interfaces__srv__Telescope_Request.
typedef struct dome_interfaces__srv__Telescope_Request__Sequence
{
  dome_interfaces__srv__Telescope_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dome_interfaces__srv__Telescope_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'telescope_response'
// already included above
// #include "rosidl_generator_c/string.h"

// Struct defined in srv/Telescope in the package dome_interfaces.
typedef struct dome_interfaces__srv__Telescope_Response
{
  rosidl_generator_c__String telescope_response;
} dome_interfaces__srv__Telescope_Response;

// Struct for a sequence of dome_interfaces__srv__Telescope_Response.
typedef struct dome_interfaces__srv__Telescope_Response__Sequence
{
  dome_interfaces__srv__Telescope_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dome_interfaces__srv__Telescope_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DOME_INTERFACES__SRV__TELESCOPE__STRUCT_H_
