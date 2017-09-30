#include <ras_group8_platform/Platform.hpp>

// STD
#include <string>

namespace ras_group8_platform {

Platform::Platform(ros::NodeHandle& nodeHandle)
    : nodeHandle_(nodeHandle)
{
  if (!readParameters()) {
    ROS_ERROR("Could not read parameters.");
    ros::requestShutdown();
  }

  ROS_INFO("Successfully launched node.");
}

Platform::~Platform()
{
}

bool Platform::readParameters()
{
  if (!nodeHandle_.getParam("wheel_radius", wheelRadius)) return false;
  if (!nodeHandle_.getParam("wheel_distance", wheelDistance)) return false;
  
  return true;
}

} /* namespace */