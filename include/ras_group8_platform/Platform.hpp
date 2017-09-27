#pragma once

#include <ros/ros.h>

namespace ras_group8_platform {

class Platform
{
public:
  Platform(ros::NodeHandle& nodeHandle);
  virtual ~Platform();

private:
  bool readParameters();

  /* ROS Objects
   */
  ros::NodeHandle& nodeHandle_;
  
  /* Parameters
   */
  double wheelRadius;
  double wheelBase;
};

} /* namespace */