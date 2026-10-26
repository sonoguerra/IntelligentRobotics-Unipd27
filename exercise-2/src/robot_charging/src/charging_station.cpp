
#include "rclcpp/rclcpp.hpp"
#include "msg_interfaces/msg/robot_status.hpp"

using std::placeholders::_1;

class ChargingStation : public rclcpp::Node
{
  public:
    ChargingStation() : Node("temperature_monitor")
    {
      subscription_ = this->create_subscription<msg_interfaces::msg::RobotStatus>(
        "/charge_status", 10, std::bind(&ChargingStation::topic_callback, this, _1));
    }

  private:
    void topic_callback(const msg_interfaces::msg::RobotStatus & m) const
    {
      RCLCPP_INFO(this->get_logger(), "RECEIVING\nRoom %d: %s, Battery: %d", m.room_id, m.room_name.c_str(), m.battery_level);     
    }
    rclcpp::Subscription<msg_interfaces::msg::RobotStatus>::SharedPtr subscription_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<ChargingStation>());
  rclcpp::shutdown();
  return 0;
}