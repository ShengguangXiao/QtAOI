#ifndef WEBCAMERAMANAGER_H
#define WEBCAMERAMANAGER_H

#include "opencv2/core/core.hpp"
#include "opencv2/opencv.hpp"

namespace AOI {
namespace Vision {

const int MAX_CAMERA_NUM = 10;

class WebCameraManager
{
public:
    static WebCameraManager *GetInstance();
    int GrabImage(short nCameraID, cv::Mat &mat);
private:
    cv::VideoCapture    _videoCapture[MAX_CAMERA_NUM];
    WebCameraManager();
};

}
}

#endif // WEBCAMERAMANAGER_H
