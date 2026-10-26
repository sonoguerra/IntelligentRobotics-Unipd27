
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/float64.hpp"
using std::placeholders::_1;

class ChargingStation : public rclcpp::Node
{
  public:
    ChargingStation() : Node("temperature_monitor")
    {
      subscription_ = this->create_subscription<std_msgs::msg::Float64>(
        "/temperature", 10, std::bind(&ChargingStation::topic_callback, this, _1));
    }

  private:
    void topic_callback(const std_msgs::msg::Float64 & t) const
    {
      RCLCPP_INFO(this->get_logger(), "Received: %f \u00B0C", t.data);

      if (t.data > 25.0)
      {
        RCLCPP_INFO(this->get_logger(), "WARNING: Temperature is > 25.0 \u00B0C!");
      }
      
    }
    rclcpp::Subscription<std_msgs::msg::Float64>::SharedPtr subscription_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<ChargingStation>());
  rclcpp::shutdown();
  return 0;
}