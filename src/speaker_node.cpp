#include <ros/ros.h>
#include <ras_group8_speaker/Speaker.hpp>

int main(int argc, char** argv)
{
  ros::init(argc, argv, "ras_group8_speaker");
  ros::NodeHandle node_handle("~");

  ras_group8_speaker::Speaker main_object(node_handle);

  ros::spin();
  return 0;
}
