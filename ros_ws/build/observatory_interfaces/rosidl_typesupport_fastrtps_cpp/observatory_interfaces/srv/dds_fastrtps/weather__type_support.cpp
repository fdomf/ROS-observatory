// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from observatory_interfaces:srv/Weather.idl
// generated code does not contain a copyright notice
#include "observatory_interfaces/srv/weather__rosidl_typesupport_fastrtps_cpp.hpp"
#include "observatory_interfaces/srv/weather__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace observatory_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_observatory_interfaces
cdr_serialize(
  const observatory_interfaces::srv::Weather_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: weather_action
  cdr << ros_message.weather_action;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_observatory_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  observatory_interfaces::srv::Weather_Request & ros_message)
{
  // Member: weather_action
  cdr >> ros_message.weather_action;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_observatory_interfaces
get_serialized_size(
  const observatory_interfaces::srv::Weather_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: weather_action
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.weather_action.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_observatory_interfaces
max_serialized_size_Weather_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: weather_action
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

static bool _Weather_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const observatory_interfaces::srv::Weather_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Weather_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<observatory_interfaces::srv::Weather_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Weather_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const observatory_interfaces::srv::Weather_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Weather_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Weather_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _Weather_Request__callbacks = {
  "observatory_interfaces::srv",
  "Weather_Request",
  _Weather_Request__cdr_serialize,
  _Weather_Request__cdr_deserialize,
  _Weather_Request__get_serialized_size,
  _Weather_Request__max_serialized_size
};

static rosidl_message_type_support_t _Weather_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Weather_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace observatory_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_observatory_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<observatory_interfaces::srv::Weather_Request>()
{
  return &observatory_interfaces::srv::typesupport_fastrtps_cpp::_Weather_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, observatory_interfaces, srv, Weather_Request)() {
  return &observatory_interfaces::srv::typesupport_fastrtps_cpp::_Weather_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace observatory_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_observatory_interfaces
cdr_serialize(
  const observatory_interfaces::srv::Weather_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: data_response
  {
    cdr << ros_message.data_response;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_observatory_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  observatory_interfaces::srv::Weather_Response & ros_message)
{
  // Member: data_response
  {
    cdr >> ros_message.data_response;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_observatory_interfaces
get_serialized_size(
  const observatory_interfaces::srv::Weather_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: data_response
  {
    size_t array_size = 10;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.data_response[index].size() + 1);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_observatory_interfaces
max_serialized_size_Weather_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: data_response
  {
    size_t array_size = 10;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _Weather_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const observatory_interfaces::srv::Weather_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Weather_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<observatory_interfaces::srv::Weather_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Weather_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const observatory_interfaces::srv::Weather_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Weather_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Weather_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _Weather_Response__callbacks = {
  "observatory_interfaces::srv",
  "Weather_Response",
  _Weather_Response__cdr_serialize,
  _Weather_Response__cdr_deserialize,
  _Weather_Response__get_serialized_size,
  _Weather_Response__max_serialized_size
};

static rosidl_message_type_support_t _Weather_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Weather_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace observatory_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_observatory_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<observatory_interfaces::srv::Weather_Response>()
{
  return &observatory_interfaces::srv::typesupport_fastrtps_cpp::_Weather_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, observatory_interfaces, srv, Weather_Response)() {
  return &observatory_interfaces::srv::typesupport_fastrtps_cpp::_Weather_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace observatory_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _Weather__callbacks = {
  "observatory_interfaces::srv",
  "Weather",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, observatory_interfaces, srv, Weather_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, observatory_interfaces, srv, Weather_Response)(),
};

static rosidl_service_type_support_t _Weather__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Weather__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace observatory_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_observatory_interfaces
const rosidl_service_type_support_t *
get_service_type_support_handle<observatory_interfaces::srv::Weather>()
{
  return &observatory_interfaces::srv::typesupport_fastrtps_cpp::_Weather__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, observatory_interfaces, srv, Weather)() {
  return &observatory_interfaces::srv::typesupport_fastrtps_cpp::_Weather__handle;
}

#ifdef __cplusplus
}
#endif
