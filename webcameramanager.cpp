#include "webcameramanager.h"
#include "constants.h"

namespace AOI {
namespace Vision {

WebCameraManager::WebCameraManager()
{
    for ( short i = 0; i < MAX_CAMERA_NUM; ++ i )
    {
        _videoCapture[i].open(i);
    }
}

WebCameraManager *WebCameraManager::GetInstance()
{
    static WebCameraManager instance;
    return &instance;
}

int WebCameraManager::GrabImage(short nCameraID, cv::Mat &mat)
{
    if ( nCameraID < 0 || nCameraID > MAX_CAMERA_NUM )
        return NOK;

    if ( ! _videoCapture[nCameraID].isOpened() )
        return NOK;

    _videoCapture[nCameraID] >> mat;

    return OK;
}

}
}
