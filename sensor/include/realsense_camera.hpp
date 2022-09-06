#ifndef REALSENSE_CAMERA_HPP_
#define REALSENSE_CAMERA_HPP_

#include <librealsense2/rs.hpp>
#include <opencv4/opencv2/opencv.hpp>
#include <iostream>

// realsense深度相机类
// 功能需求
// 打开相机；取流；错误检测；记录；
class realsense_camera
{
private:
    /* data */
    int index;
    rs2::context ctx;   //设备工厂对象
    rs2::device device; //相机设备对象

public:
    realsense_camera(/* args */);
    ~realsense_camera();
    int GetDevices();
};

#endif