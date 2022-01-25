#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "POS.h"
#include "Human.h"

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