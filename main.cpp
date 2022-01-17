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
    printf("x:%lf y:%lf\n", x, y);
}

Human::Human(char* name, int age)
{
    mName = (char *)malloc(strlen(name) + 1);
    strcpy(mName, name);
    mAge = age;
}
int main()
{
    POS * pPos = new POS;

    pPos->x = 100.0;
    pPos->y = 200.0;

    pPos->print();
    
    char name[] = "Taro Yamada";

    Human human1(name, 20);

    int * pNum1    = new int;
    short * pNum2  = new short(50);
    short * pArray = new short[5];

    *pNum1 = 100;
    printf("Num1:%d Num2:%d\n", *pNum1, *pNum2);

    for (int i = 0; i < 5; i++)
    {
        pArray[i] = i;
        printf("pArray[%d]:%d\n", i, i);
    }

    delete pNum1;
    delete pNum2;
    delete pPos;

    return 0;
}