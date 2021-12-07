// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from artscript_interfaces:msg/Imu.idl
// generated code does not contain a copyright notice

#ifndef ARTSCRIPT_INTERFACES__MSG__DETAIL__IMU__STRUCT_HPP_
#define ARTSCRIPT_INTERFACES__MSG__DETAIL__IMU__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__artscript_interfaces__msg__Imu __attribute__((deprecated))
#else
# define DEPRECATED__artscript_interfaces__msg__Imu __declspec(deprecated)
#endif

namespace artscript_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Imu_
{
  using Type = Imu_<ContainerAllocator>;

  explicit Imu_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 3>::iterator, double>(this->acceleration.begin(), this->acceleration.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->angular.begin(), this->angular.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->angle.begin(), this->angle.end(), 0.0);
    }
  }

  explicit Imu_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : acceleration(_alloc),
    angular(_alloc),
    angle(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 3>::iterator, double>(this->acceleration.begin(), this->acceleration.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->angular.begin(), this->angular.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->angle.begin(), this->angle.end(), 0.0);
    }
  }

  // field types and members
  using _acceleration_type =
    std::array<double, 3>;
  _acceleration_type acceleration;
  using _angular_type =
    std::array<double, 3>;
  _angular_type angular;
  using _angle_type =
    std::array<double, 3>;
  _angle_type angle;

  // setters for named parameter idiom
  Type & set__acceleration(
    const std::array<double, 3> & _arg)
  {
    this->acceleration = _arg;
    return *this;
  }
  Type & set__angular(
    const std::array<double, 3> & _arg)
  {
    this->angular = _arg;
    return *this;
  }
  Type & set__angle(
    const std::array<double, 3> & _arg)
  {
    this->angle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    artscript_interfaces::msg::Imu_<ContainerAllocator> *;
  using ConstRawPtr =
    const artscript_interfaces::msg::Imu_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<artscript_interfaces::msg::Imu_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<artscript_interfaces::msg::Imu_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      artscript_interfaces::msg::Imu_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<artscript_interfaces::msg::Imu_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      artscript_interfaces::msg::Imu_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<artscript_interfaces::msg::Imu_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<artscript_interfaces::msg::Imu_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<artscript_interfaces::msg::Imu_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__artscript_interfaces__msg__Imu
    std::shared_ptr<artscript_interfaces::msg::Imu_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__artscript_interfaces__msg__Imu
    std::shared_ptr<artscript_interfaces::msg::Imu_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Imu_ & other) const
  {
    if (this->acceleration != other.acceleration) {
      return false;
    }
    if (this->angular != other.angular) {
      return false;
    }
    if (this->angle != other.angle) {
      return false;
    }
    return true;
  }
  bool operator!=(const Imu_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Imu_

// alias to use template instance with default allocator
using Imu =
  artscript_interfaces::msg::Imu_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace artscript_interfaces

#endif  // ARTSCRIPT_INTERFACES__MSG__DETAIL__IMU__STRUCT_HPP_
