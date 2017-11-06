#include <ras_group8_speaker/Speaker.hpp>

// STD
#include <string>

namespace ras_group8_speaker {

Speaker::Speaker(ros::NodeHandle& node_handle)
    : node_handle_(node_handle)
{
  if (!readParameters()) {
    ROS_ERROR("Could not read parameters.");
    ros::requestShutdown();
  }
  
//  subscriber_ = node_handle_.subscribe(subscriber_topic_, 1,
//                                      &Speaker::topicCallback, this);

  ROS_INFO("Successfully launched node.");
}

Speaker::~Speaker()
{
}

bool Speaker::readParameters()
{
  if (!node_handle_.getParam("subscriber_topic", subscriber_topic_))
    return false;
  return true;
}

//void Speaker::topicCallback(const phidgets::motor_encoder& msg)
//{
//}


} /* namespace */
