#include <cwchar>
#include <iostream>
#include <list>
#include <stdio.h>
#include <stdlib.h>
#include "Animal.h"
#include "POS.h"
#include "Human.h"
#include "Logger.h"

// 参照渡し 引数:参照変数(=エイリアス)
void funcB(int & refnum, std::list<std::string>& refLogList)
{
    // 参照変数の書き換え
    refnum = 80;
    refLogList.push_back("== 参照渡し ==");
}

int main()
{
    // リスト
    std::list<std::string> LogList;
    LogList.push_back("== start ==");

    // ログ出力
    Logger::Info("Start!!!");

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
    int num = 50;
    printf("num:%d\n", num);
    printf("num:0x%n\n", &num);
    funcB(num, LogList);
    printf("num:%d\n", num);

    // 仮想関数
    Dog dog;
    Cat cat;
    dog.say();
    cat.say();

    LogList.push_back("== end ==");
    for (auto itr = LogList.begin(); itr != LogList.end(); ++itr) {
        std::cout << *itr << std::endl;
    }

    delete pNum1;
    delete pNum2;
    delete pPos;

    Logger::Info("Done!!!");
    return 0;
}
