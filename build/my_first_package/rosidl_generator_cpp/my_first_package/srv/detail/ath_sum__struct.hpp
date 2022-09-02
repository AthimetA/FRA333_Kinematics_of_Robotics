// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_first_package:srv/AthSum.idl
// generated code does not contain a copyright notice

#ifndef MY_FIRST_PACKAGE__SRV__DETAIL__ATH_SUM__STRUCT_HPP_
#define MY_FIRST_PACKAGE__SRV__DETAIL__ATH_SUM__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__my_first_package__srv__AthSum_Request __attribute__((deprecated))
#else
# define DEPRECATED__my_first_package__srv__AthSum_Request __declspec(deprecated)
#endif

namespace my_first_package
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AthSum_Request_
{
  using Type = AthSum_Request_<ContainerAllocator>;

  explicit AthSum_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->a = 0ll;
      this->b = 0ll;
    }
  }

  explicit AthSum_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->a = 0ll;
      this->b = 0ll;
    }
  }

  // field types and members
  using _a_type =
    int64_t;
  _a_type a;
  using _b_type =
    int64_t;
  _b_type b;

  // setters for named parameter idiom
  Type & set__a(
    const int64_t & _arg)
  {
    this->a = _arg;
    return *this;
  }
  Type & set__b(
    const int64_t & _arg)
  {
    this->b = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_first_package::srv::AthSum_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_first_package::srv::AthSum_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_first_package::srv::AthSum_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_first_package::srv::AthSum_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_first_package::srv::AthSum_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_first_package::srv::AthSum_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_first_package::srv::AthSum_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_first_package::srv::AthSum_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_first_package::srv::AthSum_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_first_package::srv::AthSum_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_first_package__srv__AthSum_Request
    std::shared_ptr<my_first_package::srv::AthSum_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_first_package__srv__AthSum_Request
    std::shared_ptr<my_first_package::srv::AthSum_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AthSum_Request_ & other) const
  {
    if (this->a != other.a) {
      return false;
    }
    if (this->b != other.b) {
      return false;
    }
    return true;
  }
  bool operator!=(const AthSum_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AthSum_Request_

// alias to use template instance with default allocator
using AthSum_Request =
  my_first_package::srv::AthSum_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace my_first_package


#ifndef _WIN32
# define DEPRECATED__my_first_package__srv__AthSum_Response __attribute__((deprecated))
#else
# define DEPRECATED__my_first_package__srv__AthSum_Response __declspec(deprecated)
#endif

namespace my_first_package
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AthSum_Response_
{
  using Type = AthSum_Response_<ContainerAllocator>;

  explicit AthSum_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sum = 0ll;
    }
  }

  explicit AthSum_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sum = 0ll;
    }
  }

  // field types and members
  using _sum_type =
    int64_t;
  _sum_type sum;

  // setters for named parameter idiom
  Type & set__sum(
    const int64_t & _arg)
  {
    this->sum = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_first_package::srv::AthSum_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_first_package::srv::AthSum_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_first_package::srv::AthSum_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_first_package::srv::AthSum_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_first_package::srv::AthSum_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_first_package::srv::AthSum_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_first_package::srv::AthSum_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_first_package::srv::AthSum_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_first_package::srv::AthSum_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_first_package::srv::AthSum_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_first_package__srv__AthSum_Response
    std::shared_ptr<my_first_package::srv::AthSum_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_first_package__srv__AthSum_Response
    std::shared_ptr<my_first_package::srv::AthSum_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AthSum_Response_ & other) const
  {
    if (this->sum != other.sum) {
      return false;
    }
    return true;
  }
  bool operator!=(const AthSum_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AthSum_Response_

// alias to use template instance with default allocator
using AthSum_Response =
  my_first_package::srv::AthSum_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace my_first_package

namespace my_first_package
{

namespace srv
{

struct AthSum
{
  using Request = my_first_package::srv::AthSum_Request;
  using Response = my_first_package::srv::AthSum_Response;
};

}  // namespace srv

}  // namespace my_first_package

#endif  // MY_FIRST_PACKAGE__SRV__DETAIL__ATH_SUM__STRUCT_HPP_
