
#include "rclcpp/rclcpp.hpp"
#include "msg_interfaces/msg/robot_status.hpp"

#include <string>

using namespace std::chrono_literals;

constexpr std::array<const char*, 5> rooms = {
    "Robot Vision Lab", "SSL Lab", "IAS-Lab",
    "Neurorobotics Lab", "Autonomous Robotics Lab"
};

class Robot : public rclcpp::Node
{
    public:
        Robot() : Node("robot"), battery_level_(100)
        {
            std::srand(std::time({}));
            publisher_ = this->create_publisher<msg_interfaces::msg::RobotStatus>("/charge_status", 10);
            timer_ = this->create_wall_timer(200ms, std::bind(&Robot::timer_callback, this));
            battery_timer_ = this->create_wall_timer(10s, std::bind(&Robot::battery_callback, this));
        }
    
    private:
        void timer_callback()
        {
            auto m = msg_interfaces::msg::RobotStatus();

            const int rand_idx = std::rand() % rooms.size();

            m.room_id = rand_idx + 1;
            m.room_name = rooms[rand_idx];
            m.battery_level = battery_level_;

            RCLCPP_INFO(this->get_logger(), "PUBLISHING\nRoom %d: %s, Battery: %d", m.room_id, m.room_name.c_str(), m.battery_level);
            publisher_->publish(m);
        }

        void battery_callback()
        {
            if (battery_level_ > 0) {
                battery_level_ -= 1;
            }
        }

        rclcpp::TimerBase::SharedPtr timer_;
        rclcpp::TimerBase::SharedPtr battery_timer_;
        rclcpp::Publisher<msg_interfaces::msg::RobotStatus>::SharedPtr publisher_;
        int8_t battery_level_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<Robot>());
  rclcpp::shutdown();
  return 0;
}