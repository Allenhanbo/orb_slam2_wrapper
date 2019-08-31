#include "orb_slam2_wrapper/orb_slam2_mono.h"

int main(int argc, char* argv[])
{
  ros::init(argc, argv, "orb_slam2_mono");
  ros::NodeHandle nh;

  orb_slam2_wrapper::OrbSlam2Mono orb_slam2_mono(nh);
  while (ros::ok())
  { /* do nothing */
  }
}