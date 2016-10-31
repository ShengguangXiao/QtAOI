#ifndef TIMELOGGER_H
#define TIMELOGGER_H

#include <string>
#include <vector>
#include <QElapsedTimer>
#include <QWriteLocker>

using namespace std;

#define ADD_TIME_LOG(Text)   TimeLogger::GetInstance()->AddTimeLog(Text, __FILE__, __LINE__ )

class TimeLogger
{
protected:
    TimeLogger();    
    vector<string> _vecLogger;
    int _cycleCount;
    QReadWriteLock _locker;
    QElapsedTimer _qElapsedTimer;
    string  _strFileName;

public:
    static TimeLogger *GetInstance()   { static TimeLogger timerLogger; return &timerLogger; }
    void SetNewCycle();
    void AddTimeLog(const string &strLog, char *file, int line);
    void SaveLog();
};

#endif // TIMELOGGER_H
