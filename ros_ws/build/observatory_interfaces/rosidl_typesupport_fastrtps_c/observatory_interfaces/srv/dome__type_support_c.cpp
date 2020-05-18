// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from observatory_interfaces:srv/Dome.idl
// generated code does not contain a copyright notice
#include "observatory_interfaces/srv/dome__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "observatory_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "observatory_interfaces/srv/dome__struct.h"
#include "observatory_interfaces/srv/dome__functions.h"
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

#include "rosidl_generator_c/string.h"  // dome_action
#include "rosidl_generator_c/string_functions.h"  // dome_action

// forward declare type support functions


using _Dome_Request__ros_msg_type = observatory_interfaces__srv__Dome_Request;

static bool _Dome_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Dome_Request__ros_msg_type * ros_message = static_cast<const _Dome_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: dome_action
  {
    const rosidl_generator_c__String * str = &ros_message->dome_action;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _Dome_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Dome_Request__ros_msg_type * ros_message = static_cast<_Dome_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: dome_action
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->dome_action.data) {
      rosidl_generator_c__String__init(&ros_message->dome_action);
    }
    bool succeeded = rosidl_generator_c__String__assign(
      &ros_message->dome_action,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'dome_action'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_observatory_interfaces
size_t get_serialized_size_observatory_interfaces__srv__Dome_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Dome_Request__ros_msg_type * ros_message = static_cast<const _Dome_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name dome_action
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->dome_action.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _Dome_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_observatory_interfaces__srv__Dome_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_observatory_interfaces
size_t max_serialized_size_observatory_interfaces__srv__Dome_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: dome_action
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _Dome_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_observatory_interfaces__srv__Dome_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Dome_Request = {
  "observatory_interfaces::srv",
  "Dome_Request",
  _Dome_Request__cdr_serialize,
  _Dome_Request__cdr_deserialize,
  _Dome_Request__get_serialized_size,
  _Dome_Request__max_serialized_size
};

static rosidl_message_type_support_t _Dome_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Dome_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, observatory_interfaces, srv, Dome_Request)() {
  return &_Dome_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "observatory_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "observatory_interfaces/srv/dome__struct.h"
// already included above
// #include "observatory_interfaces/srv/dome__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

// already included above
// #include "rosidl_generator_c/string.h"  // dome_response
// already included above
// #include "rosidl_generator_c/string_functions.h"  // dome_response

// forward declare type support functions


using _Dome_Response__ros_msg_type = observatory_interfaces__srv__Dome_Response;

static bool _Dome_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Dome_Response__ros_msg_type * ros_message = static_cast<const _Dome_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: dome_response
  {
    const rosidl_generator_c__String * str = &ros_message->dome_response;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _Dome_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Dome_Response__ros_msg_type * ros_message = static_cast<_Dome_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: dome_response
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->dome_response.data) {
      rosidl_generator_c__String__init(&ros_message->dome_response);
    }
    bool succeeded = rosidl_generator_c__String__assign(
      &ros_message->dome_response,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'dome_response'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_observatory_interfaces
size_t get_serialized_size_observatory_interfaces__srv__Dome_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Dome_Response__ros_msg_type * ros_message = static_cast<const _Dome_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name dome_response
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->dome_response.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _Dome_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_observatory_interfaces__srv__Dome_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_observatory_interfaces
size_t max_serialized_size_observatory_interfaces__srv__Dome_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: dome_response
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _Dome_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_observatory_interfaces__srv__Dome_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Dome_Response = {
  "observatory_interfaces::srv",
  "Dome_Response",
  _Dome_Response__cdr_serialize,
  _Dome_Response__cdr_deserialize,
  _Dome_Response__get_serialized_size,
  _Dome_Response__max_serialized_size
};

static rosidl_message_type_support_t _Dome_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Dome_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, observatory_interfaces, srv, Dome_Response)() {
  return &_Dome_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "observatory_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "observatory_interfaces/srv/dome.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t Dome__callbacks = {
  "observatory_interfaces::srv",
  "Dome",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, observatory_interfaces, srv, Dome_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, observatory_interfaces, srv, Dome_Response)(),
};

static rosidl_service_type_support_t Dome__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &Dome__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, observatory_interfaces, srv, Dome)() {
  return &Dome__handle;
}

#if defined(__cplusplus)
}
#endif
