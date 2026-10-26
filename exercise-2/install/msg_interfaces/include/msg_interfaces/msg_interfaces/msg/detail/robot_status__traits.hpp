// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from msg_interfaces:msg/RobotStatus.idl
// generated code does not contain a copyright notice

#ifndef MSG_INTERFACES__MSG__DETAIL__ROBOT_STATUS__TRAITS_HPP_
#define MSG_INTERFACES__MSG__DETAIL__ROBOT_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "msg_interfaces/msg/detail/robot_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace msg_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const RobotStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: room_id
  {
    out << "room_id: ";
    rosidl_generator_traits::value_to_yaml(msg.room_id, out);
    out << ", ";
  }

  // member: room_name
  {
    out << "room_name: ";
    rosidl_generator_traits::value_to_yaml(msg.room_name, out);
    out << ", ";
  }

  // member: battery_level
  {
    out << "battery_level: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_level, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: room_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "room_id: ";
    rosidl_generator_traits::value_to_yaml(msg.room_id, out);
    out << "\n";
  }

  // member: room_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "room_name: ";
    rosidl_generator_traits::value_to_yaml(msg.room_name, out);
    out << "\n";
  }

  // member: battery_level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_level: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_level, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotStatus & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace msg_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use msg_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const msg_interfaces::msg::RobotStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  msg_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use msg_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const msg_interfaces::msg::RobotStatus & msg)
{
  return msg_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<msg_interfaces::msg::RobotStatus>()
{
  return "msg_interfaces::msg::RobotStatus";
}

template<>
inline const char * name<msg_interfaces::msg::RobotStatus>()
{
  return "msg_interfaces/msg/RobotStatus";
}

template<>
struct has_fixed_size<msg_interfaces::msg::RobotStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<msg_interfaces::msg::RobotStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<msg_interfaces::msg::RobotStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MSG_INTERFACES__MSG__DETAIL__ROBOT_STATUS__TRAITS_HPP_
