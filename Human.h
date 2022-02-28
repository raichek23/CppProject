#include <list>
#include <string>

class Human
{
private:
    std::list<std::string> & m_logList;

public:
    char * mName;
    int    mAge;

    Human(char* name, int age, std::list<std::string> & LogList);    
};
