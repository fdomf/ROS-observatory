// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dome_interfaces:srv/Telescope.idl
// generated code does not contain a copyright notice

#ifndef DOME_INTERFACES__SRV__TELESCOPE__STRUCT_HPP_
#define DOME_INTERFACES__SRV__TELESCOPE__STRUCT_HPP_

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
# define DEPRECATED__dome_interfaces__srv__Telescope_Request __attribute__((deprecated))
#else
# define DEPRECATED__dome_interfaces__srv__Telescope_Request __declspec(deprecated)
#endif

namespace dome_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Telescope_Request_
{
  using Type = Telescope_Request_<ContainerAllocator>;

  explicit Telescope_Request_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->telescope_action = "";
      this->alt = 0.0;
      this->az = 0.0;
    }
  }

  explicit Telescope_Request_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : telescope_action(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->telescope_action = "";
      this->alt = 0.0;
      this->az = 0.0;
    }
  }

  // field types and members
  using _telescope_action_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _telescope_action_type telescope_action;
  using _alt_type =
    double;
  _alt_type alt;
  using _az_type =
    double;
  _az_type az;

  // setters for named parameter idiom
  Type & set__telescope_action(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->telescope_action = _arg;
    return *this;
  }
  Type & set__alt(
    const double & _arg)
  {
    this->alt = _arg;
    return *this;
  }
  Type & set__az(
    const double & _arg)
  {
    this->az = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dome_interfaces::srv::Telescope_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const dome_interfaces::srv::Telescope_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dome_interfaces::srv::Telescope_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dome_interfaces::srv::Telescope_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dome_interfaces::srv::Telescope_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dome_interfaces::srv::Telescope_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dome_interfaces::srv::Telescope_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dome_interfaces::srv::Telescope_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dome_interfaces::srv::Telescope_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dome_interfaces::srv::Telescope_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dome_interfaces__srv__Telescope_Request
    std::shared_ptr<dome_interfaces::srv::Telescope_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dome_interfaces__srv__Telescope_Request
    std::shared_ptr<dome_interfaces::srv::Telescope_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Telescope_Request_ & other) const
  {
    if (this->telescope_action != other.telescope_action) {
      return false;
    }
    if (this->alt != other.alt) {
      return false;
    }
    if (this->az != other.az) {
      return false;
    }
    return true;
  }
  bool operator!=(const Telescope_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Telescope_Request_

// alias to use template instance with default allocator
using Telescope_Request =
  dome_interfaces::srv::Telescope_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace dome_interfaces

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
# define DEPRECATED__dome_interfaces__srv__Telescope_Response __attribute__((deprecated))
#else
# define DEPRECATED__dome_interfaces__srv__Telescope_Response __declspec(deprecated)
#endif

namespace dome_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Telescope_Response_
{
  using Type = Telescope_Response_<ContainerAllocator>;

  explicit Telescope_Response_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->telescope_response = "";
    }
  }

  explicit Telescope_Response_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : telescope_response(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->telescope_response = "";
    }
  }

  // field types and members
  using _telescope_response_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _telescope_response_type telescope_response;

  // setters for named parameter idiom
  Type & set__telescope_response(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->telescope_response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dome_interfaces::srv::Telescope_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const dome_interfaces::srv::Telescope_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dome_interfaces::srv::Telescope_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dome_interfaces::srv::Telescope_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dome_interfaces::srv::Telescope_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dome_interfaces::srv::Telescope_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dome_interfaces::srv::Telescope_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dome_interfaces::srv::Telescope_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dome_interfaces::srv::Telescope_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dome_interfaces::srv::Telescope_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dome_interfaces__srv__Telescope_Response
    std::shared_ptr<dome_interfaces::srv::Telescope_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dome_interfaces__srv__Telescope_Response
    std::shared_ptr<dome_interfaces::srv::Telescope_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Telescope_Response_ & other) const
  {
    if (this->telescope_response != other.telescope_response) {
      return false;
    }
    return true;
  }
  bool operator!=(const Telescope_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Telescope_Response_

// alias to use template instance with default allocator
using Telescope_Response =
  dome_interfaces::srv::Telescope_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace dome_interfaces

namespace dome_interfaces
{

namespace srv
{

struct Telescope
{
  using Request = dome_interfaces::srv::Telescope_Request;
  using Response = dome_interfaces::srv::Telescope_Response;
};

}  // namespace srv

}  // namespace dome_interfaces

#endif  // DOME_INTERFACES__SRV__TELESCOPE__STRUCT_HPP_
