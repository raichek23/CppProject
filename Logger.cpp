#include "Logger.h"

/* シングルトンインスタンス取得 */
Logger& Logger::GetInstance()
{
    static Logger instance;
    return instance;
}

/* コンストラクタ */
Logger::Logger()
    : m_FileLogger()
{
    // ログファイルオープン
    this->m_FileLogger.Open("log.txt");
}

/* デストラクタ */
Logger::~Logger()
{
    // ログファイルクローズ
    this->m_FileLogger.Close();
}

/* Informationログ出力 */
void Logger::LogInfo(const std::string& message)
{
    std::string log_message = "[INFO]" + message;
    this->m_FileLogger.Write(log_message);
}