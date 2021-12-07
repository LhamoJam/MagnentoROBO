// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from artscript_interfaces:msg/Infraredstrain.idl
// generated code does not contain a copyright notice

#ifndef ARTSCRIPT_INTERFACES__MSG__DETAIL__INFRAREDSTRAIN__STRUCT_HPP_
#define ARTSCRIPT_INTERFACES__MSG__DETAIL__INFRAREDSTRAIN__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__artscript_interfaces__msg__Infraredstrain __attribute__((deprecated))
#else
# define DEPRECATED__artscript_interfaces__msg__Infraredstrain __declspec(deprecated)
#endif

namespace artscript_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Infraredstrain_
{
  using Type = Infraredstrain_<ContainerAllocator>;

  explicit Infraredstrain_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->infrared = 0ll;
      this->strain = 0ll;
    }
  }

  explicit Infraredstrain_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->infrared = 0ll;
      this->strain = 0ll;
    }
  }

  // field types and members
  using _infrared_type =
    int64_t;
  _infrared_type infrared;
  using _strain_type =
    int64_t;
  _strain_type strain;

  // setters for named parameter idiom
  Type & set__infrared(
    const int64_t & _arg)
  {
    this->infrared = _arg;
    return *this;
  }
  Type & set__strain(
    const int64_t & _arg)
  {
    this->strain = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    artscript_interfaces::msg::Infraredstrain_<ContainerAllocator> *;
  using ConstRawPtr =
    const artscript_interfaces::msg::Infraredstrain_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<artscript_interfaces::msg::Infraredstrain_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<artscript_interfaces::msg::Infraredstrain_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      artscript_interfaces::msg::Infraredstrain_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<artscript_interfaces::msg::Infraredstrain_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      artscript_interfaces::msg::Infraredstrain_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<artscript_interfaces::msg::Infraredstrain_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<artscript_interfaces::msg::Infraredstrain_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<artscript_interfaces::msg::Infraredstrain_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__artscript_interfaces__msg__Infraredstrain
    std::shared_ptr<artscript_interfaces::msg::Infraredstrain_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__artscript_interfaces__msg__Infraredstrain
    std::shared_ptr<artscript_interfaces::msg::Infraredstrain_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Infraredstrain_ & other) const
  {
    if (this->infrared != other.infrared) {
      return false;
    }
    if (this->strain != other.strain) {
      return false;
    }
    return true;
  }
  bool operator!=(const Infraredstrain_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Infraredstrain_

// alias to use template instance with default allocator
using Infraredstrain =
  artscript_interfaces::msg::Infraredstrain_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace artscript_interfaces

#endif  // ARTSCRIPT_INTERFACES__MSG__DETAIL__INFRAREDSTRAIN__STRUCT_HPP_
