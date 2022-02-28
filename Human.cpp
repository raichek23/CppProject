#include <list>
#include <stdlib.h>
#include <string.h>
#include <string>
#include "Human.h"

Human::Human(char* name, int age, std::list<std::string> & LogList)
    : m_logList(LogList)
{
    m_logList.push_back(__func__);
    mName = (char *)malloc(strlen(name) + 1);
    strcpy(mName, name);
    mAge = age;
}
