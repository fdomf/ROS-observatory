// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from observatory_interfaces:srv/Telescope.idl
// generated code does not contain a copyright notice
#include "observatory_interfaces/srv/telescope__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "observatory_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "observatory_interfaces/srv/telescope__struct.h"
#include "observatory_interfaces/srv/telescope__functions.h"
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

#include "rosidl_generator_c/string.h"  // telescope_action
#include "rosidl_generator_c/string_functions.h"  // telescope_action

// forward declare type support functions


using _Telescope_Request__ros_msg_type = observatory_interfaces__srv__Telescope_Request;

static bool _Telescope_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Telescope_Request__ros_msg_type * ros_message = static_cast<const _Telescope_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: telescope_action
  {
    const rosidl_generator_c__String * str = &ros_message->telescope_action;
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

  // Field name: alt
  {
    cdr << ros_message->alt;
  }

  // Field name: az
  {
    cdr << ros_message->az;
  }

  return true;
}

static bool _Telescope_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Telescope_Request__ros_msg_type * ros_message = static_cast<_Telescope_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: telescope_action
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->telescope_action.data) {
      rosidl_generator_c__String__init(&ros_message->telescope_action);
    }
    bool succeeded = rosidl_generator_c__String__assign(
      &ros_message->telescope_action,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'telescope_action'\n");
      return false;
    }
  }

  // Field name: alt
  {
    cdr >> ros_message->alt;
  }

  // Field name: az
  {
    cdr >> ros_message->az;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_observatory_interfaces
size_t get_serialized_size_observatory_interfaces__srv__Telescope_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Telescope_Request__ros_msg_type * ros_message = static_cast<const _Telescope_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name telescope_action
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->telescope_action.size + 1);
  // field.name alt
  {
    size_t item_size = sizeof(ros_message->alt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name az
  {
    size_t item_size = sizeof(ros_message->az);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Telescope_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_observatory_interfaces__srv__Telescope_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_observatory_interfaces
size_t max_serialized_size_observatory_interfaces__srv__Telescope_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: telescope_action
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: alt
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: az
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Telescope_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_observatory_interfaces__srv__Telescope_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Telescope_Request = {
  "observatory_interfaces::srv",
  "Telescope_Request",
  _Telescope_Request__cdr_serialize,
  _Telescope_Request__cdr_deserialize,
  _Telescope_Request__get_serialized_size,
  _Telescope_Request__max_serialized_size
};

static rosidl_message_type_support_t _Telescope_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Telescope_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, observatory_interfaces, srv, Telescope_Request)() {
  return &_Telescope_Request__type_support;
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
// #include "observatory_interfaces/srv/telescope__struct.h"
// already included above
// #include "observatory_interfaces/srv/telescope__functions.h"
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
// #include "rosidl_generator_c/string.h"  // telescope_response
// already included above
// #include "rosidl_generator_c/string_functions.h"  // telescope_response

// forward declare type support functions


using _Telescope_Response__ros_msg_type = observatory_interfaces__srv__Telescope_Response;

static bool _Telescope_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Telescope_Response__ros_msg_type * ros_message = static_cast<const _Telescope_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: telescope_response
  {
    const rosidl_generator_c__String * str = &ros_message->telescope_response;
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

static bool _Telescope_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Telescope_Response__ros_msg_type * ros_message = static_cast<_Telescope_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: telescope_response
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->telescope_response.data) {
      rosidl_generator_c__String__init(&ros_message->telescope_response);
    }
    bool succeeded = rosidl_generator_c__String__assign(
      &ros_message->telescope_response,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'telescope_response'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_observatory_interfaces
size_t get_serialized_size_observatory_interfaces__srv__Telescope_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Telescope_Response__ros_msg_type * ros_message = static_cast<const _Telescope_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name telescope_response
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->telescope_response.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _Telescope_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_observatory_interfaces__srv__Telescope_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_observatory_interfaces
size_t max_serialized_size_observatory_interfaces__srv__Telescope_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: telescope_response
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

static size_t _Telescope_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_observatory_interfaces__srv__Telescope_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Telescope_Response = {
  "observatory_interfaces::srv",
  "Telescope_Response",
  _Telescope_Response__cdr_serialize,
  _Telescope_Response__cdr_deserialize,
  _Telescope_Response__get_serialized_size,
  _Telescope_Response__max_serialized_size
};

static rosidl_message_type_support_t _Telescope_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Telescope_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, observatory_interfaces, srv, Telescope_Response)() {
  return &_Telescope_Response__type_support;
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
#include "observatory_interfaces/srv/telescope.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t Telescope__callbacks = {
  "observatory_interfaces::srv",
  "Telescope",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, observatory_interfaces, srv, Telescope_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, observatory_interfaces, srv, Telescope_Response)(),
};

static rosidl_service_type_support_t Telescope__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &Telescope__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, observatory_interfaces, srv, Telescope)() {
  return &Telescope__handle;
}

#if defined(__cplusplus)
}
#endif
