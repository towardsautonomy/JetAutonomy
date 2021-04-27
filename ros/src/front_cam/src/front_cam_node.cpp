#include <math.h>
#include <ros/ros.h>
#include "sensor_msgs/Image.h"

#include "opencv2/opencv.hpp"
#include <cv_bridge/cv_bridge.h>

#include "CSICamera.hpp"

const std::string node_name = "front_cam_node";

int main(int argc, char **argv) {

    ros::init(argc,argv,node_name);

    // create private node handle
    ros::NodeHandle nh("~");

    // Get params
    int width, height, frame_rate, device_id;
    bool param_exists = true;
    param_exists &= nh.getParam("width", width);
    param_exists &= nh.getParam("height", height);
    param_exists &= nh.getParam("frame_rate", frame_rate);
    param_exists &= nh.getParam("device_id", device_id);

    if (!param_exists) {
        ROS_ERROR("Camera parameters not found.");
        exit(-1);
    }

    // define publisher
    ros::Publisher front_cam_rgb_pub = nh.advertise<sensor_msgs::Image>("/front_cam/rgb", 1000);

    // initialize camera
    CSICamera camera(static_cast<uint16_t>(width), 
                     static_cast<uint16_t>(height), 
                     static_cast<uint16_t>(width), 
                     static_cast<uint16_t>(height), 
                     static_cast<uint16_t>(frame_rate), 
                     static_cast<uint16_t>(device_id));

    ros::Rate loop_rate(frame_rate);
    while (ros::ok()) {
        // capture new image
        cv::Mat frame;
        if (camera.read(frame) != 0) {
            ROS_ERROR("Error! failed to capture frame.");
        }
        else {
            // Publish the grid as a message
            cv_bridge::CvImage image_ros;
            image_ros.header.stamp   = ros::Time::now();
            image_ros.header.frame_id= std::string("front_cam");
            image_ros.encoding       = sensor_msgs::image_encodings::BGR8;
            image_ros.image          = frame;
            front_cam_rgb_pub.publish(image_ros.toImageMsg());
        }

        // spin
        ros::spinOnce();
        loop_rate.sleep();
    }

    return 0;
}