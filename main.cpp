#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "POS.h"
#include "Human.h"

// 参照渡し 引数:参照変数(=エイリアス)
void funcB(short & refnum)
{
    // 参照変数の書き換え
    refnum = 80;
}

int main()
{
    POS * pPos = new POS;

    pPos->setPos(100.0, 200.0);

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

    // 参照渡し
    short num = 50;
    printf("num:%d\n", num);
    funcB(num);
    printf("num:%d\n", num);

    delete pNum1;
    delete pNum2;
    delete pPos;

    return 0;
}
