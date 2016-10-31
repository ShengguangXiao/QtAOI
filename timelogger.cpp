#include "timelogger.h"
#include <QDateTime>
#include <QWriteLocker>
#include <QCoreApplication>

TimeLogger::TimeLogger()
{
    _cycleCount = 0;
    _strFileName = "TimeLog.log";
    _qElapsedTimer.start();
}

void TimeLogger::SetNewCycle()
{
    char szLog[1024];
    QDateTime currentTime = QDateTime::currentDateTime();
    _snprintf(szLog, sizeof ( szLog ), "--------Cycle %d: %s-------------------------", _cycleCount, currentTime.toString("yyyy.MM.dd  hh:mm:ss.zzz").toStdString().c_str());
    ++ _cycleCount;
    QWriteLocker locker(&_locker);
    _vecLogger.push_back(string(szLog));
}

void TimeLogger::AddTimeLog(const string &strLog, char *file, int line)
{
    char szLog[1024];
    _snprintf(szLog, sizeof ( szLog ), "%s\t%d\t%s\t%d", strLog.c_str(), (int)_qElapsedTimer.restart(), file, line );
    ++ _cycleCount;

    QWriteLocker locker(&_locker);
    if ( _vecLogger.size() > 5000 )
        _vecLogger.clear();
    _vecLogger.push_back(string(szLog));
}

void TimeLogger::SaveLog()
{
    FILE * pFile;
    QString qStrCurrentPath = qApp->applicationDirPath();
    if ( qStrCurrentPath.at( qStrCurrentPath.length() - 1 ) != '/' )
        qStrCurrentPath += "/";

    string strLogFilePath = qStrCurrentPath.toStdString() + _strFileName;
    pFile = fopen( strLogFilePath.c_str(), "wt");
    if (pFile == NULL)
        return;

    QWriteLocker locker(&_locker);
    fprintf(pFile, "Log\tTime Diff\tFile\tLine\n");
    for ( vector<string>::iterator it = _vecLogger.begin(); it != _vecLogger.end(); ++ it ){
        fprintf(pFile, it->c_str());
        fprintf(pFile, "\n");
    }

    fclose(pFile);
}
