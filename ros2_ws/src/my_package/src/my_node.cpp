#include "rclcpp/rclcpp.hpp"

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);

  auto node = std::make_shared<rclcpp::Node>("counter");

  int count = 0;

  auto timer = node->create_wall_timer(
    std::chrono::seconds(2),
    [&count]() {
      printf("Counter: %d\n", count++);
    }
  );

  rclcpp::spin(node);

  rclcpp::shutdown();
  
  return 0;
}
