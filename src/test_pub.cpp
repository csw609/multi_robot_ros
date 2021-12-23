#include <ros/ros.h>

int main(int argc, char **argv)
{
  ros::init(argc, argv, "test_pub");
  ros::NodeHandle nh;

  ROS_INFO("Hello world!");
}
