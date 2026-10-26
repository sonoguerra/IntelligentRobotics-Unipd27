// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from msg_interfaces:msg/RobotStatus.idl
// generated code does not contain a copyright notice

#ifndef MSG_INTERFACES__MSG__DETAIL__ROBOT_STATUS__STRUCT_H_
#define MSG_INTERFACES__MSG__DETAIL__ROBOT_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'room_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/RobotStatus in the package msg_interfaces.
typedef struct msg_interfaces__msg__RobotStatus
{
  int8_t room_id;
  rosidl_runtime_c__String room_name;
  int8_t battery_level;
} msg_interfaces__msg__RobotStatus;

// Struct for a sequence of msg_interfaces__msg__RobotStatus.
typedef struct msg_interfaces__msg__RobotStatus__Sequence
{
  msg_interfaces__msg__RobotStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg_interfaces__msg__RobotStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MSG_INTERFACES__MSG__DETAIL__ROBOT_STATUS__STRUCT_H_
