// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dome_interfaces:msg/Sensor.idl
// generated code does not contain a copyright notice

#ifndef DOME_INTERFACES__MSG__SENSOR__STRUCT_HPP_
#define DOME_INTERFACES__MSG__SENSOR__STRUCT_HPP_

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
# define DEPRECATED__dome_interfaces__msg__Sensor __attribute__((deprecated))
#else
# define DEPRECATED__dome_interfaces__msg__Sensor __declspec(deprecated)
#endif

namespace dome_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Sensor_
{
  using Type = Sensor_<ContainerAllocator>;

  explicit Sensor_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, 8>::iterator, std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>(this->sensor_status.begin(), this->sensor_status.end(), "");
    }
  }

  explicit Sensor_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : sensor_status(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, 8>::iterator, std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>(this->sensor_status.begin(), this->sensor_status.end(), "");
    }
  }

  // field types and members
  using _sensor_status_type =
    std::array<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, 8>;
  _sensor_status_type sensor_status;

  // setters for named parameter idiom
  Type & set__sensor_status(
    const std::array<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, 8> & _arg)
  {
    this->sensor_status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dome_interfaces::msg::Sensor_<ContainerAllocator> *;
  using ConstRawPtr =
    const dome_interfaces::msg::Sensor_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dome_interfaces::msg::Sensor_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dome_interfaces::msg::Sensor_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dome_interfaces::msg::Sensor_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dome_interfaces::msg::Sensor_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dome_interfaces::msg::Sensor_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dome_interfaces::msg::Sensor_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dome_interfaces::msg::Sensor_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dome_interfaces::msg::Sensor_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dome_interfaces__msg__Sensor
    std::shared_ptr<dome_interfaces::msg::Sensor_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dome_interfaces__msg__Sensor
    std::shared_ptr<dome_interfaces::msg::Sensor_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Sensor_ & other) const
  {
    if (this->sensor_status != other.sensor_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const Sensor_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Sensor_

// alias to use template instance with default allocator
using Sensor =
  dome_interfaces::msg::Sensor_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace dome_interfaces

#endif  // DOME_INTERFACES__MSG__SENSOR__STRUCT_HPP_
