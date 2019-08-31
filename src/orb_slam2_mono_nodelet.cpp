#include "orb_slam2_wrapper/orb_slam2_mono_nodelet.h"

namespace orb_slam2_wrapper {
OrbSlam2MonoNodelet::OrbSlam2MonoNodelet() : is_running_(false) {}

OrbSlam2MonoNodelet::~OrbSlam2MonoNodelet() {
  if (is_running_) {
    NODELET_WARN("Stopping ORB-SLAM2 mono wrapper nodelet.");
    delete orb_slam2_mono_;
    is_running_ = false;
  }
}

void OrbSlam2MonoNodelet::onInit() {
  NODELET_INFO("OnInit - initializing nodelet");
  nh_ = getNodeHandle();
  orb_slam2_mono_ = new orb_slam2_wrapper::OrbSlam2Mono(nh_);
  is_running_ = true;
}
} // namespace orb_slam2_wrapper

#include <pluginlib/class_list_macros.h>
PLUGINLIB_EXPORT_CLASS(orb_slam2_wrapper::OrbSlam2MonoNodelet, nodelet::Nodelet)
