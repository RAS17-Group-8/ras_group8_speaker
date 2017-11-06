#pragma once

#include <ros/ros.h>

namespace ras_group8_speaker {

class Speaker
{
public:
  Speaker(ros::NodeHandle& node_handle);
  virtual ~Speaker();

private:
  bool readParameters();
  //void topicCallback(const phidgets::motor_encoder& msg);

  /* ROS Objects
   */
  ros::NodeHandle& node_handle_;
  ros::Subscriber subscriber_;
  
  /* Parameters
   */
  std::string subscriber_topic_;
};

} /* namespace */
