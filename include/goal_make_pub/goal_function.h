#ifndef GOAL_FUNCTION_H
#define GOAL_FUNCTION_H

#include <iostream>
#include "ros/ros.h"
#include "std_msgs/String.h"
#include "geometry_msgs/PoseStamped.h"
#include <fstream>


namespace goal {
  void make_goal(geometry_msgs::PoseStamped *goal){
  }

  void make_goal_multi(geometry_msgs::PoseStamped *goal, std::string group){
  }
};

#endif // GOAL_FUNCTION_H
