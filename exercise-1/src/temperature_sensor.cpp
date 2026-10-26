
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/float64.hpp"

using namespace std::chrono_literals;

class Robot : public rclcpp::Node
{
    public:
        Robot() : Node("temperature_sensor"), room_name_(20.0)
        {
            publisher_ = this->create_publisher<std_msgs::msg::Float64>("/temperature", 10);
            timer_ = this->create_wall_timer(1000ms, std::bind(&Robot::timer_callback, this));
        }
    
    private:
        void timer_callback()
        {
            auto t = std_msgs::msg::Float64();
            t.data = room_name_;
            room_name_ += 0.5;
            RCLCPP_INFO(this->get_logger(), "%f", t.data);
            publisher_->publish(t);
        }
        rclcpp::TimerBase::SharedPtr timer_;
        rclcpp::Publisher<std_msgs::msg::Float64>::SharedPtr publisher_;
        float room_name_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<Robot>());
  rclcpp::shutdown();
  return 0;
}