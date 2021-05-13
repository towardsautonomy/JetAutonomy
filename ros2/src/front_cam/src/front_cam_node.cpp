#include <math.h>
#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/image.hpp"
#include "sensor_msgs/image_encodings.hpp"
#include "opencv2/opencv.hpp"

#include "CSICamera.hpp"

const std::string node_name = "front_cam_node";

class FrontCamPublisher : public rclcpp::Node
{
  public:
    FrontCamPublisher()
    : Node(node_name), width(1280), height(720), frame_rate(30), device_id(0), frame_num(0)
    {
        publisher_ = this->create_publisher<sensor_msgs::msg::Image>("/front_cam/rgb", 10);

        // declare parameters    
        this->declare_parameter("width");
        this->declare_parameter("height");
        this->declare_parameter("frame_rate");
        this->declare_parameter("device_id");

        // get config parameters
        bool param_exists = true;
        param_exists &= this->get_parameter("width", width);
        param_exists &= this->get_parameter("height", height);
        param_exists &= this->get_parameter("frame_rate", frame_rate);
        param_exists &= this->get_parameter("device_id", device_id);
        if (!param_exists) {
            RCLCPP_ERROR(this->get_logger(), "Camera parameters not found.");
            RCLCPP_INFO(this->get_logger(), "Using defaults camera parameters: \
                                             \n\twidth : %d\n\theight : %d\n\tframe_rate : %d\n\tdevice_id : %d",
                                             width, height, frame_rate, device_id);
        }

        // initialize camera
        camera = new CSICamera(static_cast<uint16_t>(width), 
                                static_cast<uint16_t>(height), 
                                static_cast<uint16_t>(width), 
                                static_cast<uint16_t>(height), 
                                static_cast<uint16_t>(frame_rate), 
                                static_cast<uint16_t>(device_id));
        RCLCPP_INFO(this->get_logger(), "Camera Initialized");

        // spin the publisher
        spin();
    }

    private:
        uint16_t width;
        uint16_t height;
        uint16_t frame_rate;
        uint16_t device_id;
        uint64_t frame_num=0;
        CSICamera * camera;

        // publisher
        rclcpp::Publisher<sensor_msgs::msg::Image>::SharedPtr publisher_;
        
        // spin camera
        void spin() {
            cv::Mat frame;
            while (rclcpp::ok()) {
                // capture new image
                if (this->camera->read(frame) != 0) {
                    RCLCPP_ERROR(this->get_logger(), "Error! failed to capture frame.");
                }
                else {
                    // Avoid copying image message if possible
                    sensor_msgs::msg::Image::UniquePtr image_msg(new sensor_msgs::msg::Image());

                    // Convert OpenCV Mat to ROS Image
                    image_msg->header.stamp = rclcpp::Clock().now();
                    image_msg->header.frame_id = std::string("camera_link");
                    image_msg->height = frame.rows;
                    image_msg->width = frame.cols;
                    image_msg->encoding = sensor_msgs::image_encodings::BGR8; //this->camera(mat_type2encoding(frame.type()));
                    image_msg->is_bigendian = false;
                    image_msg->step = static_cast<sensor_msgs::msg::Image::_step_type>(frame.step);
                    image_msg->data.assign(frame.datastart, frame.dataend);
                    this->publisher_->publish(std::move(image_msg));
                    // RCLCPP_INFO(this->get_logger(), "Publishing frame %d", frame_num);
                    frame_num ++;
                }
            }
        }
};

int main(int argc, char **argv) {

    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<FrontCamPublisher>());
    rclcpp::shutdown();

    return 0;
}