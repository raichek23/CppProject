#include <stdlib.h>
#include <string.h>
#include "Human.h"

Human::Human(char* name, int age)
{
    mName = (char *)malloc(strlen(name) + 1);
    strcpy(mName, name);
    mAge = age;
}
