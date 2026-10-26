# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target msg_interfaces::msg_interfaces
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${msg_interfaces_TARGETS}.
if(msg_interfaces_TARGETS AND NOT TARGET msg_interfaces::msg_interfaces)
  add_library(msg_interfaces::msg_interfaces INTERFACE IMPORTED)
  set_target_properties(msg_interfaces::msg_interfaces PROPERTIES
    INTERFACE_LINK_LIBRARIES "${msg_interfaces_TARGETS}")
endif()
