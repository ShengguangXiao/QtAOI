#include "hmimodemanager.h"

HmiModeManager *HmiModeManager::GetInstance()
{
    static HmiModeManager hmiModeManager;
    return &hmiModeManager;
}

HmiProgram *HmiModeManager::GetHmiProgram()
{
    return &_hmiProgram;
}

HmiAuto     *HmiModeManager::GetHmiAuto()
{
    return &_hmiAuto;
}

HmiConfig   *HmiModeManager::GetHmiConfig()
{
    return &_hmiConfig;
}

HmiUtility  *HmiModeManager::GetHmiUtility()
{
    return &_hmiUtility;
}

HmiTeach    *HmiModeManager::GetHmiTeach()
{
    return &_hmiTeach;
}

HmiModeManager::HmiModeManager()
{
}

/**********************************
 * C style function to get handle *
**********************************/
HmiProgram* GetHmiProgramHandle()
{
    return HmiModeManager::GetInstance()->GetHmiProgram();
}
