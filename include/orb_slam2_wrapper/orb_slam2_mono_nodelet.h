#ifndef PROJECT_ORB_SLAM2_MONO_NODELET_H
#define PROJECT_ORB_SLAM2_MONO_NODELET_H

#include "orb_slam2_mono.h"
#include <nodelet/nodelet.h>

namespace orb_slam2_wrapper {
class OrbSlam2MonoNodelet : public nodelet::Nodelet {
public:
  OrbSlam2MonoNodelet();
  ~OrbSlam2MonoNodelet();
  virtual void onInit();

private:
  ros::NodeHandle nh_;
  bool is_running_;
  orb_slam2_wrapper::OrbSlam2Mono *orb_slam2_mono_;
};
} // namespace orb_slam2_wrapper

#endif // PROJECT_ORB_SLAM2_MONO_NODELET_H
