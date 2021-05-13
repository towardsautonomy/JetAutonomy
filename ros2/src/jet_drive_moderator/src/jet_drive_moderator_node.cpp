#include <math.h>
#include "rclcpp/rclcpp.hpp"
#include "jetpilot_msgs/msg/joystick_cmd.hpp"
#include "jetpilot_msgs/msg/jet_drive_cmd.hpp"

using std::placeholders::_1;

const std::string node_name = "jet_drive_moderator_node";

class JetDriveModeratorNode : public rclcpp::Node
{
  public:
    JetDriveModeratorNode()
    : Node(node_name)
    {
        subscription_ = this->create_subscription<jetpilot_msgs::msg::JoystickCmd>(
                            "/joystick/cmd", 10, std::bind(&JetDriveModeratorNode::jooystick_cb, this, _1));

        publisher_ = this->create_publisher<jetpilot_msgs::msg::JetDriveCmd>("/jet_drive/cmd", 10);
    }

    private:
        // subscriber
        void jooystick_cb(const jetpilot_msgs::msg::JoystickCmd::SharedPtr js_cmd) const {
            jetpilot_msgs::msg::JetDriveCmd::UniquePtr jet_drive_cmd(new jetpilot_msgs::msg::JetDriveCmd());

            // check if manual drive is enabled
            if (js_cmd->manual_drive_enabled) {
                jet_drive_cmd->header = js_cmd->header;
                jet_drive_cmd->steering = js_cmd->steering;
                jet_drive_cmd->throttle = js_cmd->throttle;

                // publish this command
                this->publisher_->publish(std::move(jet_drive_cmd));
            }
        }
        rclcpp::Subscription<jetpilot_msgs::msg::JoystickCmd>::SharedPtr subscription_;
        // publisher
        rclcpp::Publisher<jetpilot_msgs::msg::JetDriveCmd>::SharedPtr publisher_;
};

int main(int argc, char **argv) {

    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<JetDriveModeratorNode>());
    rclcpp::shutdown();

    return 0;
}