// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from observatory_interfaces:srv/Telescope.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "observatory_interfaces/srv/telescope__rosidl_typesupport_introspection_c.h"
#include "observatory_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "observatory_interfaces/srv/telescope__struct.h"


// Include directives for member types
// Member `telescope_action`
#include "rosidl_generator_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember Telescope_Request__rosidl_typesupport_introspection_c__Telescope_Request_message_member_array[3] = {
  {
    "telescope_action",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(observatory_interfaces__srv__Telescope_Request, telescope_action),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "alt",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(observatory_interfaces__srv__Telescope_Request, alt),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "az",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(observatory_interfaces__srv__Telescope_Request, az),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Telescope_Request__rosidl_typesupport_introspection_c__Telescope_Request_message_members = {
  "observatory_interfaces__srv",  // message namespace
  "Telescope_Request",  // message name
  3,  // number of fields
  sizeof(observatory_interfaces__srv__Telescope_Request),
  Telescope_Request__rosidl_typesupport_introspection_c__Telescope_Request_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Telescope_Request__rosidl_typesupport_introspection_c__Telescope_Request_message_type_support_handle = {
  0,
  &Telescope_Request__rosidl_typesupport_introspection_c__Telescope_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_observatory_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, observatory_interfaces, srv, Telescope_Request)() {
  if (!Telescope_Request__rosidl_typesupport_introspection_c__Telescope_Request_message_type_support_handle.typesupport_identifier) {
    Telescope_Request__rosidl_typesupport_introspection_c__Telescope_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Telescope_Request__rosidl_typesupport_introspection_c__Telescope_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "observatory_interfaces/srv/telescope__rosidl_typesupport_introspection_c.h"
// already included above
// #include "observatory_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "observatory_interfaces/srv/telescope__struct.h"


// Include directives for member types
// Member `telescope_response`
// already included above
// #include "rosidl_generator_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember Telescope_Response__rosidl_typesupport_introspection_c__Telescope_Response_message_member_array[1] = {
  {
    "telescope_response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(observatory_interfaces__srv__Telescope_Response, telescope_response),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Telescope_Response__rosidl_typesupport_introspection_c__Telescope_Response_message_members = {
  "observatory_interfaces__srv",  // message namespace
  "Telescope_Response",  // message name
  1,  // number of fields
  sizeof(observatory_interfaces__srv__Telescope_Response),
  Telescope_Response__rosidl_typesupport_introspection_c__Telescope_Response_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Telescope_Response__rosidl_typesupport_introspection_c__Telescope_Response_message_type_support_handle = {
  0,
  &Telescope_Response__rosidl_typesupport_introspection_c__Telescope_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_observatory_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, observatory_interfaces, srv, Telescope_Response)() {
  if (!Telescope_Response__rosidl_typesupport_introspection_c__Telescope_Response_message_type_support_handle.typesupport_identifier) {
    Telescope_Response__rosidl_typesupport_introspection_c__Telescope_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Telescope_Response__rosidl_typesupport_introspection_c__Telescope_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_generator_c/service_type_support_struct.h"
// already included above
// #include "observatory_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "observatory_interfaces/srv/telescope__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers observatory_interfaces__srv__telescope__rosidl_typesupport_introspection_c__Telescope_service_members = {
  "observatory_interfaces__srv",  // service namespace
  "Telescope",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // observatory_interfaces__srv__telescope__rosidl_typesupport_introspection_c__Telescope_Request_message_type_support_handle,
  NULL  // response message
  // observatory_interfaces__srv__telescope__rosidl_typesupport_introspection_c__Telescope_Response_message_type_support_handle
};

static rosidl_service_type_support_t observatory_interfaces__srv__telescope__rosidl_typesupport_introspection_c__Telescope_service_type_support_handle = {
  0,
  &observatory_interfaces__srv__telescope__rosidl_typesupport_introspection_c__Telescope_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, observatory_interfaces, srv, Telescope_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, observatory_interfaces, srv, Telescope_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_observatory_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, observatory_interfaces, srv, Telescope)() {
  if (!observatory_interfaces__srv__telescope__rosidl_typesupport_introspection_c__Telescope_service_type_support_handle.typesupport_identifier) {
    observatory_interfaces__srv__telescope__rosidl_typesupport_introspection_c__Telescope_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)observatory_interfaces__srv__telescope__rosidl_typesupport_introspection_c__Telescope_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, observatory_interfaces, srv, Telescope_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, observatory_interfaces, srv, Telescope_Response)()->data;
  }

  return &observatory_interfaces__srv__telescope__rosidl_typesupport_introspection_c__Telescope_service_type_support_handle;
}
