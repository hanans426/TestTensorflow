#pragma once

#include <vector>

#include "opencv2/core.hpp"

class Figure {
 public:
  Figure(std::vector<cv::Point>, std::vector<float>);
  ~Figure();
  void setLandmarks(std::vector<cv::Point>);
  std::vector<cv::Point>& getLandmarks();
  void setHeadPose(std::vector<float>);
  std::vector<float>& getHeadPose();

 private:
  std::vector<cv::Point> landmarks;
  std::vector<float> headPose;
};