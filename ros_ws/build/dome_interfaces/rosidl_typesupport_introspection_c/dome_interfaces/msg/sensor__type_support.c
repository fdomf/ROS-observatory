// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from dome_interfaces:msg/Sensor.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "dome_interfaces/msg/sensor__rosidl_typesupport_introspection_c.h"
#include "dome_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "dome_interfaces/msg/sensor__struct.h"


// Include directives for member types
// Member `sensor_status`
#include "rosidl_generator_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember Sensor__rosidl_typesupport_introspection_c__Sensor_message_member_array[1] = {
  {
    "sensor_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    8,  // array size
    false,  // is upper bound
    offsetof(dome_interfaces__msg__Sensor, sensor_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Sensor__rosidl_typesupport_introspection_c__Sensor_message_members = {
  "dome_interfaces__msg",  // message namespace
  "Sensor",  // message name
  1,  // number of fields
  sizeof(dome_interfaces__msg__Sensor),
  Sensor__rosidl_typesupport_introspection_c__Sensor_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Sensor__rosidl_typesupport_introspection_c__Sensor_message_type_support_handle = {
  0,
  &Sensor__rosidl_typesupport_introspection_c__Sensor_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dome_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dome_interfaces, msg, Sensor)() {
  if (!Sensor__rosidl_typesupport_introspection_c__Sensor_message_type_support_handle.typesupport_identifier) {
    Sensor__rosidl_typesupport_introspection_c__Sensor_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Sensor__rosidl_typesupport_introspection_c__Sensor_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
