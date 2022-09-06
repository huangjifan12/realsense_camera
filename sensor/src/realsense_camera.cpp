#include "realsense_camera.hpp"

realsense_camera::realsense_camera(/* args */)
{
    std::cout << "realsense camera created" << std::endl;
}

realsense_camera::~realsense_camera()
{
}

int realsense_camera::GetDevices()
{
    rs2::device_list list = ctx.query_devices(); // Get a snapshot of currently connected devices
    if (list.size() == 0)
        throw std::runtime_error("[ERROR] No device detected. Is it plugged in?");
    device = list.front();
    
    rs2::pipeline pipe(ctx);
    pipe.start();
    rs2::frameset frames = pipe.wait_for_frames();
    
}
