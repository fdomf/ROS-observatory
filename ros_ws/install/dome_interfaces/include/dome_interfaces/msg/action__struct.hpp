// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dome_interfaces:msg/Action.idl
// generated code does not contain a copyright notice

#ifndef DOME_INTERFACES__MSG__ACTION__STRUCT_HPP_
#define DOME_INTERFACES__MSG__ACTION__STRUCT_HPP_

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
# define DEPRECATED__dome_interfaces__msg__Action __attribute__((deprecated))
#else
# define DEPRECATED__dome_interfaces__msg__Action __declspec(deprecated)
#endif

namespace dome_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Action_
{
  using Type = Action_<ContainerAllocator>;

  explicit Action_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->action = "";
    }
  }

  explicit Action_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : action(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->action = "";
    }
  }

  // field types and members
  using _action_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _action_type action;

  // setters for named parameter idiom
  Type & set__action(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->action = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dome_interfaces::msg::Action_<ContainerAllocator> *;
  using ConstRawPtr =
    const dome_interfaces::msg::Action_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dome_interfaces::msg::Action_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dome_interfaces::msg::Action_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dome_interfaces::msg::Action_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dome_interfaces::msg::Action_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dome_interfaces::msg::Action_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dome_interfaces::msg::Action_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dome_interfaces::msg::Action_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dome_interfaces::msg::Action_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dome_interfaces__msg__Action
    std::shared_ptr<dome_interfaces::msg::Action_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dome_interfaces__msg__Action
    std::shared_ptr<dome_interfaces::msg::Action_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Action_ & other) const
  {
    if (this->action != other.action) {
      return false;
    }
    return true;
  }
  bool operator!=(const Action_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Action_

// alias to use template instance with default allocator
using Action =
  dome_interfaces::msg::Action_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace dome_interfaces

#endif  // DOME_INTERFACES__MSG__ACTION__STRUCT_HPP_
