#pragma once
#include <fstream>

class FileLogger
{
public:
    FileLogger();
    FileLogger(const std::string& file_path);
    ~FileLogger();

    void Open(const std::string& file_path);
    void Close();
    bool IsOpend();
    void Write(const std::string& log);

private:
    std::string m_FilePath;     // ログファイルパス
    std::ofstream m_Stream;     // ファイル出力ストリーム
};