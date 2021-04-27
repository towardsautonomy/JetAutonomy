
#include <iostream>
#include <vector>
#include <string>
#include <sstream>

#include <opencv2/opencv.hpp>

using namespace std;

class CSICamera {
    private:
        // capture dimensions
        uint16_t capture_width;
        uint16_t capture_height;
        // display dimensions
        uint16_t display_width;
        uint16_t display_height;
        // frame rate
        uint16_t frame_rate;
        // device id
        uint16_t device_id;
        // Videocapture 
        cv::VideoCapture cap;
        // gstreamer string
        std::string build_gstreamer_string() {
            std::ostringstream oss;
            oss << "nvarguscamerasrc sensor-id=" << device_id << " ! video/x-raw(memory:NVMM), "
                << "width=" << capture_width << ", "
                << "height=" << capture_height << ", "
                << "format=(string)NV12, framerate=(fraction)" << frame_rate << "/1 "
                << "! nvvidconv ! video/x-raw, width=(int)" << display_width << ", "
                << "height=(int)" << display_height << ", "
                << "format=(string)BGRx ! videoconvert ! appsink'";

            std::string gstreamer_str = oss.str();
            return gstreamer_str;
        }

    public:
        // constructor
        CSICamera() :
            capture_width(1280), 
            capture_height(720), 
            display_width(1280), 
            display_height(720), 
            frame_rate(60), 
            device_id(0) 
        {
            // Initialize the camera
            cap = cv::VideoCapture(build_gstreamer_string(), cv::CAP_GSTREAMER );

            // check if camera was initialized
            if(!cap.isOpened()) {
                ROS_ERROR("Error! Failed to initialize the camera.");
                exit(-1);
            }
            else {
                ROS_INFO("Camera Initialized.");
            }
        }

        CSICamera(uint16_t capture_width, 
                  uint16_t capture_height, 
                  uint16_t display_width, 
                  uint16_t display_height, 
                  uint16_t frame_rate, 
                  uint16_t device_id) :
            capture_width(capture_width), 
            capture_height(capture_height), 
            display_width(display_width), 
            display_height(display_height), 
            frame_rate(frame_rate), 
            device_id(device_id) 
        {
            // Initialize the camera
            cap = cv::VideoCapture(build_gstreamer_string(), cv::CAP_GSTREAMER );

            // check if camera was initialized
            if(!cap.isOpened()) {
                ROS_ERROR("Error! Failed to initialize the camera.");
                exit(-1);
            }
        }

        // read method
        int read(cv::Mat &frame) {
            int return_val = 0;
            // wait for a new frame from camera and store it into 'frame'
            cap.read(frame);
            // check if we succeeded
            if (frame.empty()) {
                ROS_ERROR("ERROR! blank frame grabbed.");
                return_val = -1; 
            }
            return return_val;
        }

        // deconstructor
        ~CSICamera() {
            cap.release();
        }
};