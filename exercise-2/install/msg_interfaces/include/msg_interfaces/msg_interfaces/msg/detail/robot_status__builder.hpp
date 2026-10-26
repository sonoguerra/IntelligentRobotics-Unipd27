// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from msg_interfaces:msg/RobotStatus.idl
// generated code does not contain a copyright notice

#ifndef MSG_INTERFACES__MSG__DETAIL__ROBOT_STATUS__BUILDER_HPP_
#define MSG_INTERFACES__MSG__DETAIL__ROBOT_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "msg_interfaces/msg/detail/robot_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace msg_interfaces
{

namespace msg
{

namespace builder
{

class Init_RobotStatus_battery_level
{
public:
  explicit Init_RobotStatus_battery_level(::msg_interfaces::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  ::msg_interfaces::msg::RobotStatus battery_level(::msg_interfaces::msg::RobotStatus::_battery_level_type arg)
  {
    msg_.battery_level = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg_interfaces::msg::RobotStatus msg_;
};

class Init_RobotStatus_room_name
{
public:
  explicit Init_RobotStatus_room_name(::msg_interfaces::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_battery_level room_name(::msg_interfaces::msg::RobotStatus::_room_name_type arg)
  {
    msg_.room_name = std::move(arg);
    return Init_RobotStatus_battery_level(msg_);
  }

private:
  ::msg_interfaces::msg::RobotStatus msg_;
};

class Init_RobotStatus_room_id
{
public:
  Init_RobotStatus_room_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotStatus_room_name room_id(::msg_interfaces::msg::RobotStatus::_room_id_type arg)
  {
    msg_.room_id = std::move(arg);
    return Init_RobotStatus_room_name(msg_);
  }

private:
  ::msg_interfaces::msg::RobotStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg_interfaces::msg::RobotStatus>()
{
  return msg_interfaces::msg::builder::Init_RobotStatus_room_id();
}

}  // namespace msg_interfaces

#endif  // MSG_INTERFACES__MSG__DETAIL__ROBOT_STATUS__BUILDER_HPP_
