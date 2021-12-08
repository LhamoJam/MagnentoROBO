// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from artscript_interfaces:srv/ServoSingle.idl
// generated code does not contain a copyright notice

#ifndef ARTSCRIPT_INTERFACES__SRV__DETAIL__SERVO_SINGLE__STRUCT_HPP_
#define ARTSCRIPT_INTERFACES__SRV__DETAIL__SERVO_SINGLE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__artscript_interfaces__srv__ServoSingle_Request __attribute__((deprecated))
#else
# define DEPRECATED__artscript_interfaces__srv__ServoSingle_Request __declspec(deprecated)
#endif

namespace artscript_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ServoSingle_Request_
{
  using Type = ServoSingle_Request_<ContainerAllocator>;

  explicit ServoSingle_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->servo_id = 0l;
      this->servo_angle = 0l;
      this->servo_speed = 0l;
    }
  }

  explicit ServoSingle_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->servo_id = 0l;
      this->servo_angle = 0l;
      this->servo_speed = 0l;
    }
  }

  // field types and members
  using _servo_id_type =
    int32_t;
  _servo_id_type servo_id;
  using _servo_angle_type =
    int32_t;
  _servo_angle_type servo_angle;
  using _servo_speed_type =
    int32_t;
  _servo_speed_type servo_speed;

  // setters for named parameter idiom
  Type & set__servo_id(
    const int32_t & _arg)
  {
    this->servo_id = _arg;
    return *this;
  }
  Type & set__servo_angle(
    const int32_t & _arg)
  {
    this->servo_angle = _arg;
    return *this;
  }
  Type & set__servo_speed(
    const int32_t & _arg)
  {
    this->servo_speed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    artscript_interfaces::srv::ServoSingle_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const artscript_interfaces::srv::ServoSingle_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<artscript_interfaces::srv::ServoSingle_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<artscript_interfaces::srv::ServoSingle_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      artscript_interfaces::srv::ServoSingle_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<artscript_interfaces::srv::ServoSingle_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      artscript_interfaces::srv::ServoSingle_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<artscript_interfaces::srv::ServoSingle_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<artscript_interfaces::srv::ServoSingle_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<artscript_interfaces::srv::ServoSingle_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__artscript_interfaces__srv__ServoSingle_Request
    std::shared_ptr<artscript_interfaces::srv::ServoSingle_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__artscript_interfaces__srv__ServoSingle_Request
    std::shared_ptr<artscript_interfaces::srv::ServoSingle_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ServoSingle_Request_ & other) const
  {
    if (this->servo_id != other.servo_id) {
      return false;
    }
    if (this->servo_angle != other.servo_angle) {
      return false;
    }
    if (this->servo_speed != other.servo_speed) {
      return false;
    }
    return true;
  }
  bool operator!=(const ServoSingle_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ServoSingle_Request_

// alias to use template instance with default allocator
using ServoSingle_Request =
  artscript_interfaces::srv::ServoSingle_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace artscript_interfaces


#ifndef _WIN32
# define DEPRECATED__artscript_interfaces__srv__ServoSingle_Response __attribute__((deprecated))
#else
# define DEPRECATED__artscript_interfaces__srv__ServoSingle_Response __declspec(deprecated)
#endif

namespace artscript_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ServoSingle_Response_
{
  using Type = ServoSingle_Response_<ContainerAllocator>;

  explicit ServoSingle_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->move_status = false;
    }
  }

  explicit ServoSingle_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->move_status = false;
    }
  }

  // field types and members
  using _move_status_type =
    bool;
  _move_status_type move_status;

  // setters for named parameter idiom
  Type & set__move_status(
    const bool & _arg)
  {
    this->move_status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    artscript_interfaces::srv::ServoSingle_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const artscript_interfaces::srv::ServoSingle_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<artscript_interfaces::srv::ServoSingle_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<artscript_interfaces::srv::ServoSingle_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      artscript_interfaces::srv::ServoSingle_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<artscript_interfaces::srv::ServoSingle_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      artscript_interfaces::srv::ServoSingle_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<artscript_interfaces::srv::ServoSingle_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<artscript_interfaces::srv::ServoSingle_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<artscript_interfaces::srv::ServoSingle_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__artscript_interfaces__srv__ServoSingle_Response
    std::shared_ptr<artscript_interfaces::srv::ServoSingle_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__artscript_interfaces__srv__ServoSingle_Response
    std::shared_ptr<artscript_interfaces::srv::ServoSingle_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ServoSingle_Response_ & other) const
  {
    if (this->move_status != other.move_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const ServoSingle_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ServoSingle_Response_

// alias to use template instance with default allocator
using ServoSingle_Response =
  artscript_interfaces::srv::ServoSingle_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace artscript_interfaces

namespace artscript_interfaces
{

namespace srv
{

struct ServoSingle
{
  using Request = artscript_interfaces::srv::ServoSingle_Request;
  using Response = artscript_interfaces::srv::ServoSingle_Response;
};

}  // namespace srv

}  // namespace artscript_interfaces

#endif  // ARTSCRIPT_INTERFACES__SRV__DETAIL__SERVO_SINGLE__STRUCT_HPP_
