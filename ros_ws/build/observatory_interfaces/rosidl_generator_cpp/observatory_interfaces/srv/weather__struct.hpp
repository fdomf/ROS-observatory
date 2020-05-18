// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from observatory_interfaces:srv/Weather.idl
// generated code does not contain a copyright notice

#ifndef OBSERVATORY_INTERFACES__SRV__WEATHER__STRUCT_HPP_
#define OBSERVATORY_INTERFACES__SRV__WEATHER__STRUCT_HPP_

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

// Protect against ERROR being predefined on Windows, in case somebody defines a
// constant by that name.
#if defined(_WIN32)
  #if defined(ERROR)
    #undef ERROR
  #endif
  #if defined(NO_ERROR)
    #undef NO_ERROR
  #endif
#endif

#ifndef _WIN32
# define DEPRECATED__observatory_interfaces__srv__Weather_Request __attribute__((deprecated))
#else
# define DEPRECATED__observatory_interfaces__srv__Weather_Request __declspec(deprecated)
#endif

namespace observatory_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Weather_Request_
{
  using Type = Weather_Request_<ContainerAllocator>;

  explicit Weather_Request_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->weather_action = "";
    }
  }

  explicit Weather_Request_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : weather_action(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->weather_action = "";
    }
  }

  // field types and members
  using _weather_action_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _weather_action_type weather_action;

  // setters for named parameter idiom
  Type & set__weather_action(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->weather_action = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    observatory_interfaces::srv::Weather_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const observatory_interfaces::srv::Weather_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<observatory_interfaces::srv::Weather_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<observatory_interfaces::srv::Weather_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      observatory_interfaces::srv::Weather_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<observatory_interfaces::srv::Weather_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      observatory_interfaces::srv::Weather_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<observatory_interfaces::srv::Weather_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<observatory_interfaces::srv::Weather_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<observatory_interfaces::srv::Weather_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__observatory_interfaces__srv__Weather_Request
    std::shared_ptr<observatory_interfaces::srv::Weather_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__observatory_interfaces__srv__Weather_Request
    std::shared_ptr<observatory_interfaces::srv::Weather_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Weather_Request_ & other) const
  {
    if (this->weather_action != other.weather_action) {
      return false;
    }
    return true;
  }
  bool operator!=(const Weather_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Weather_Request_

// alias to use template instance with default allocator
using Weather_Request =
  observatory_interfaces::srv::Weather_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace observatory_interfaces

// Protect against ERROR being predefined on Windows, in case somebody defines a
// constant by that name.
#if defined(_WIN32)
  #if defined(ERROR)
    #undef ERROR
  #endif
  #if defined(NO_ERROR)
    #undef NO_ERROR
  #endif
#endif

#ifndef _WIN32
# define DEPRECATED__observatory_interfaces__srv__Weather_Response __attribute__((deprecated))
#else
# define DEPRECATED__observatory_interfaces__srv__Weather_Response __declspec(deprecated)
#endif

namespace observatory_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Weather_Response_
{
  using Type = Weather_Response_<ContainerAllocator>;

  explicit Weather_Response_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, 10>::iterator, std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>(this->data_response.begin(), this->data_response.end(), "");
    }
  }

  explicit Weather_Response_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : data_response(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, 10>::iterator, std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>(this->data_response.begin(), this->data_response.end(), "");
    }
  }

  // field types and members
  using _data_response_type =
    std::array<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, 10>;
  _data_response_type data_response;

  // setters for named parameter idiom
  Type & set__data_response(
    const std::array<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, 10> & _arg)
  {
    this->data_response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    observatory_interfaces::srv::Weather_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const observatory_interfaces::srv::Weather_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<observatory_interfaces::srv::Weather_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<observatory_interfaces::srv::Weather_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      observatory_interfaces::srv::Weather_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<observatory_interfaces::srv::Weather_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      observatory_interfaces::srv::Weather_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<observatory_interfaces::srv::Weather_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<observatory_interfaces::srv::Weather_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<observatory_interfaces::srv::Weather_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__observatory_interfaces__srv__Weather_Response
    std::shared_ptr<observatory_interfaces::srv::Weather_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__observatory_interfaces__srv__Weather_Response
    std::shared_ptr<observatory_interfaces::srv::Weather_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Weather_Response_ & other) const
  {
    if (this->data_response != other.data_response) {
      return false;
    }
    return true;
  }
  bool operator!=(const Weather_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Weather_Response_

// alias to use template instance with default allocator
using Weather_Response =
  observatory_interfaces::srv::Weather_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace observatory_interfaces

namespace observatory_interfaces
{

namespace srv
{

struct Weather
{
  using Request = observatory_interfaces::srv::Weather_Request;
  using Response = observatory_interfaces::srv::Weather_Response;
};

}  // namespace srv

}  // namespace observatory_interfaces

#endif  // OBSERVATORY_INTERFACES__SRV__WEATHER__STRUCT_HPP_
