// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from observatory_interfaces:srv/Camera.idl
// generated code does not contain a copyright notice

#ifndef OBSERVATORY_INTERFACES__SRV__CAMERA__STRUCT_HPP_
#define OBSERVATORY_INTERFACES__SRV__CAMERA__STRUCT_HPP_

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
# define DEPRECATED__observatory_interfaces__srv__Camera_Request __attribute__((deprecated))
#else
# define DEPRECATED__observatory_interfaces__srv__Camera_Request __declspec(deprecated)
#endif

namespace observatory_interfaces
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
      this->file_name = "";
    }
  }

  explicit Camera_Request_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : camera_action(_alloc),
    file_name(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->camera_action = "";
      this->file_name = "";
    }
  }

  // field types and members
  using _camera_action_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _camera_action_type camera_action;
  using _file_name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _file_name_type file_name;

  // setters for named parameter idiom
  Type & set__camera_action(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->camera_action = _arg;
    return *this;
  }
  Type & set__file_name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->file_name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    observatory_interfaces::srv::Camera_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const observatory_interfaces::srv::Camera_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<observatory_interfaces::srv::Camera_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<observatory_interfaces::srv::Camera_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      observatory_interfaces::srv::Camera_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<observatory_interfaces::srv::Camera_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      observatory_interfaces::srv::Camera_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<observatory_interfaces::srv::Camera_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<observatory_interfaces::srv::Camera_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<observatory_interfaces::srv::Camera_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__observatory_interfaces__srv__Camera_Request
    std::shared_ptr<observatory_interfaces::srv::Camera_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__observatory_interfaces__srv__Camera_Request
    std::shared_ptr<observatory_interfaces::srv::Camera_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Camera_Request_ & other) const
  {
    if (this->camera_action != other.camera_action) {
      return false;
    }
    if (this->file_name != other.file_name) {
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
  observatory_interfaces::srv::Camera_Request_<std::allocator<void>>;

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
# define DEPRECATED__observatory_interfaces__srv__Camera_Response __attribute__((deprecated))
#else
# define DEPRECATED__observatory_interfaces__srv__Camera_Response __declspec(deprecated)
#endif

namespace observatory_interfaces
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
      this->camera_response = "";
      this->image_tags = "";
      this->image_objects = "";
    }
  }

  explicit Camera_Response_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : camera_response(_alloc),
    image_tags(_alloc),
    image_objects(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->camera_response = "";
      this->image_tags = "";
      this->image_objects = "";
    }
  }

  // field types and members
  using _camera_response_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _camera_response_type camera_response;
  using _image_tags_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _image_tags_type image_tags;
  using _image_objects_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _image_objects_type image_objects;

  // setters for named parameter idiom
  Type & set__camera_response(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->camera_response = _arg;
    return *this;
  }
  Type & set__image_tags(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->image_tags = _arg;
    return *this;
  }
  Type & set__image_objects(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->image_objects = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    observatory_interfaces::srv::Camera_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const observatory_interfaces::srv::Camera_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<observatory_interfaces::srv::Camera_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<observatory_interfaces::srv::Camera_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      observatory_interfaces::srv::Camera_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<observatory_interfaces::srv::Camera_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      observatory_interfaces::srv::Camera_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<observatory_interfaces::srv::Camera_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<observatory_interfaces::srv::Camera_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<observatory_interfaces::srv::Camera_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__observatory_interfaces__srv__Camera_Response
    std::shared_ptr<observatory_interfaces::srv::Camera_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__observatory_interfaces__srv__Camera_Response
    std::shared_ptr<observatory_interfaces::srv::Camera_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Camera_Response_ & other) const
  {
    if (this->camera_response != other.camera_response) {
      return false;
    }
    if (this->image_tags != other.image_tags) {
      return false;
    }
    if (this->image_objects != other.image_objects) {
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
  observatory_interfaces::srv::Camera_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace observatory_interfaces

namespace observatory_interfaces
{

namespace srv
{

struct Camera
{
  using Request = observatory_interfaces::srv::Camera_Request;
  using Response = observatory_interfaces::srv::Camera_Response;
};

}  // namespace srv

}  // namespace observatory_interfaces

#endif  // OBSERVATORY_INTERFACES__SRV__CAMERA__STRUCT_HPP_
