#include "SystemConfig.h"

SystemConfig::SystemConfig()
{
    _bRunOffline = true;
}

/*static*/ SystemConfig *SystemConfig::Instance()
{
    static SystemConfig instance;
    return &instance;
}

UI_USER_LEVEL SystemConfig::GetUserLevel()
{
    return _enUserLevel;
}

bool SystemConfig::RunOffline()
{
    return _bRunOffline;
}
