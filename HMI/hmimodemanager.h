#ifndef HMIMODEMANAGER_H
#define HMIMODEMANAGER_H

#include "HmiProgram.h"
#include "HmiAuto.h"
#include "HmiConfig.h"
#include "HmiUtility.h"
#include "HmiTeach.h"

class HmiModeManager
{
public:
    static HmiModeManager *GetInstance();
    HmiProgram  *GetHmiProgram();
    HmiAuto     *GetHmiAuto();
    HmiConfig   *GetHmiConfig();
    HmiUtility  *GetHmiUtility();
    HmiTeach    *GetHmiTeach();
protected:
    HmiModeManager();
    HmiProgram      _hmiProgram;
    HmiAuto         _hmiAuto;
    HmiConfig       _hmiConfig;
    HmiUtility      _hmiUtility;
    HmiTeach        _hmiTeach;
};

HmiProgram* GetHmiProgramHandle();

#endif // HMIMODEMANAGER_H
