#include <stdio.h>
#include <string.h>
#include <stdlib.h>

class POS
{
public:
    double x;
    double y;

    POS();
    ~POS();

    void print();
};

class Human
{
public:
    char * mName;
    int    mAge;

    Human(char* name, int age);    
};

POS::POS()
{
    x = 0;
    y = 0;
}

POS::~POS()
{
}

void POS::print()
{
    printf("x:%lf y:%lf", x, y);
}

Human::Human(char* name, int age)
{
    mName = (char *)malloc(strlen(name) + 1);
    strcpy(mName, name);
    mAge = age;
}
int main()
{
    POS pos;

    pos.x = 100.0;
    pos.y = 200.0;

    pos.print();
    
    char name[] = "Taro Yamada";

    Human human1(name, 20);

    return 0;
}