// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from artscript_interfaces:msg/InfraredStrain.idl
// generated code does not contain a copyright notice

#ifndef ARTSCRIPT_INTERFACES__MSG__DETAIL__INFRARED_STRAIN__STRUCT_HPP_
#define ARTSCRIPT_INTERFACES__MSG__DETAIL__INFRARED_STRAIN__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__artscript_interfaces__msg__InfraredStrain __attribute__((deprecated))
#else
# define DEPRECATED__artscript_interfaces__msg__InfraredStrain __declspec(deprecated)
#endif

namespace artscript_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct InfraredStrain_
{
  using Type = InfraredStrain_<ContainerAllocator>;

  explicit InfraredStrain_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->infrared = 0ll;
      this->strain = 0ll;
    }
  }

  explicit InfraredStrain_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    artscript_interfaces::msg::InfraredStrain_<ContainerAllocator> *;
  using ConstRawPtr =
    const artscript_interfaces::msg::InfraredStrain_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<artscript_interfaces::msg::InfraredStrain_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<artscript_interfaces::msg::InfraredStrain_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      artscript_interfaces::msg::InfraredStrain_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<artscript_interfaces::msg::InfraredStrain_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      artscript_interfaces::msg::InfraredStrain_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<artscript_interfaces::msg::InfraredStrain_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<artscript_interfaces::msg::InfraredStrain_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<artscript_interfaces::msg::InfraredStrain_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__artscript_interfaces__msg__InfraredStrain
    std::shared_ptr<artscript_interfaces::msg::InfraredStrain_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__artscript_interfaces__msg__InfraredStrain
    std::shared_ptr<artscript_interfaces::msg::InfraredStrain_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InfraredStrain_ & other) const
  {
    if (this->infrared != other.infrared) {
      return false;
    }
    if (this->strain != other.strain) {
      return false;
    }
    return true;
  }
  bool operator!=(const InfraredStrain_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InfraredStrain_

// alias to use template instance with default allocator
using InfraredStrain =
  artscript_interfaces::msg::InfraredStrain_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace artscript_interfaces

#endif  // ARTSCRIPT_INTERFACES__MSG__DETAIL__INFRARED_STRAIN__STRUCT_HPP_
