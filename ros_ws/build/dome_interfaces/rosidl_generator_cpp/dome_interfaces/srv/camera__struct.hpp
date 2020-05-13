// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dome_interfaces:srv/Camera.idl
// generated code does not contain a copyright notice

#ifndef DOME_INTERFACES__SRV__CAMERA__STRUCT_HPP_
#define DOME_INTERFACES__SRV__CAMERA__STRUCT_HPP_

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
# define DEPRECATED__dome_interfaces__srv__Camera_Request __attribute__((deprecated))
#else
# define DEPRECATED__dome_interfaces__srv__Camera_Request __declspec(deprecated)
#endif

namespace dome_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Camera_Request_
{
  using Type = Camera_Request_<ContainerAllocator>;

  explicit Camera_Request_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->camera_action = "";
    }
  }

  explicit Camera_Request_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : camera_action(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->camera_action = "";
    }
  }

  // field types and members
  using _camera_action_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _camera_action_type camera_action;

  // setters for named parameter idiom
  Type & set__camera_action(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->camera_action = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dome_interfaces::srv::Camera_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const dome_interfaces::srv::Camera_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dome_interfaces::srv::Camera_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dome_interfaces::srv::Camera_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dome_interfaces::srv::Camera_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dome_interfaces::srv::Camera_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dome_interfaces::srv::Camera_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dome_interfaces::srv::Camera_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dome_interfaces::srv::Camera_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dome_interfaces::srv::Camera_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dome_interfaces__srv__Camera_Request
    std::shared_ptr<dome_interfaces::srv::Camera_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dome_interfaces__srv__Camera_Request
    std::shared_ptr<dome_interfaces::srv::Camera_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Camera_Request_ & other) const
  {
    if (this->camera_action != other.camera_action) {
      return false;
    }
    return true;
  }
  bool operator!=(const Camera_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Camera_Request_

// alias to use template instance with default allocator
using Camera_Request =
  dome_interfaces::srv::Camera_Request_<std::allocator<void>>;

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
# define DEPRECATED__dome_interfaces__srv__Camera_Response __attribute__((deprecated))
#else
# define DEPRECATED__dome_interfaces__srv__Camera_Response __declspec(deprecated)
#endif

namespace dome_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Camera_Response_
{
  using Type = Camera_Response_<ContainerAllocator>;

  explicit Camera_Response_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, 10>::iterator, std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>(this->camera_response.begin(), this->camera_response.end(), "");
    }
  }

  explicit Camera_Response_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : camera_response(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, 10>::iterator, std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>(this->camera_response.begin(), this->camera_response.end(), "");
    }
  }

  // field types and members
  using _camera_response_type =
    std::array<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, 10>;
  _camera_response_type camera_response;

  // setters for named parameter idiom
  Type & set__camera_response(
    const std::array<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, 10> & _arg)
  {
    this->camera_response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dome_interfaces::srv::Camera_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const dome_interfaces::srv::Camera_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dome_interfaces::srv::Camera_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dome_interfaces::srv::Camera_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dome_interfaces::srv::Camera_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dome_interfaces::srv::Camera_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dome_interfaces::srv::Camera_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dome_interfaces::srv::Camera_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dome_interfaces::srv::Camera_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dome_interfaces::srv::Camera_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dome_interfaces__srv__Camera_Response
    std::shared_ptr<dome_interfaces::srv::Camera_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dome_interfaces__srv__Camera_Response
    std::shared_ptr<dome_interfaces::srv::Camera_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Camera_Response_ & other) const
  {
    if (this->camera_response != other.camera_response) {
      return false;
    }
    return true;
  }
  bool operator!=(const Camera_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Camera_Response_

// alias to use template instance with default allocator
using Camera_Response =
  dome_interfaces::srv::Camera_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace dome_interfaces

namespace dome_interfaces
{

namespace srv
{

struct Camera
{
  using Request = dome_interfaces::srv::Camera_Request;
  using Response = dome_interfaces::srv::Camera_Response;
};

}  // namespace srv

}  // namespace dome_interfaces

#endif  // DOME_INTERFACES__SRV__CAMERA__STRUCT_HPP_
