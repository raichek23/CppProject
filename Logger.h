#pragma once
#include "FileLogger.h"

#include <string>

class Logger
{
public:
    static void Info(const std::string& message)
    {
        Logger::GetInstance().LogInfo(message);
    }

private:
    static Logger& GetInstance();

    Logger();
    ~Logger();

    void LogInfo(const std::string& message);
    
    FileLogger m_FileLogger;
};