#include "FileLogger.h"

/* コンストラクタ */
FileLogger::FileLogger()
    : m_FilePath("")
    , m_Stream()
{
    // Nothing to do
}

/* コンストラクタ */
FileLogger::FileLogger(const std::string& file_path)
    : m_FilePath(file_path)
    , m_Stream
{
    // ファイルオープン
    this->Open(file_path)
}

/* デストラクタ */
FileLogger::~FileLogger()
{
    // ファイルクローズ
    this->Close();
}

/* ファイルオープン */
void FileLogger::Open(const std::string& file_path)
{
    if(this->IsOpend() == false)
    {
        this->m_Stream.open(file_path, std::ios::out);
    }
}

/* ファイルクローズ */
void FileLogger::Close()
{
    if(this->IsOpend() == true)
    {
        this->m_Stream.close();
    }
}

/* ファイルオープン確認 */
bool FileLogger::IsOpend()
{
    return this->m_Stream.is_open();
}

/* ファイル書き込み */
void FileLogger::Write(const std::string& log)
{
    if(this->IsOpend() == true)
    {
        this->m_Stream << log << std::endl;
    }
}