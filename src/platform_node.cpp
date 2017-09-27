#include <ros/ros.h>
#include <ras_group8_platform/Platform.hpp>

int main(int argc, char** argv)
{
  ros::init(argc, argv, "ras_group8_platform");
  ros::NodeHandle nodeHandle("~");

  ras_group8_platform::Platform platform(nodeHandle);

  ros::spin();
  return 0;
}