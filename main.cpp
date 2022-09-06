#include <iostream>
#include "realsense_camera.hpp"

int main(void)
{
    std::cout << "hello" << std::endl;
    realsense_camera *camera1 = new realsense_camera();
    camera1->GetDevices();
}
