#ifndef SYSTEMCONFIG_H
#define SYSTEMCONFIG_H

#include "constants.h"

class SystemConfig
{
protected:
    SystemConfig();
public:
    static SystemConfig *Instance();
    UI_USER_LEVEL GetUserLevel();
    bool          RunOffline();
protected:
    UI_USER_LEVEL   _enUserLevel;
    bool            _bRunOffline;
};

#endif // SYSTEMCONFIG_H
