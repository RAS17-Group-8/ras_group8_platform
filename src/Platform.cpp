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
  
  subscriber_ = nodeHandle_.subscribe(subscriberTopic_, 1,
                                      &Platform::topicCallback, this);

  ROS_INFO("Successfully launched node.");
}

Platform::~Platform()
{
}

bool Platform::readParameters()
{
  if (!nodeHandle_.getParam("subscriber_topic", subscriberTopic_)) return false;
  return true;
}

void Platform::topicCallback(const phidgets::motor_encoder& msg)
{
}


} /* namespace */