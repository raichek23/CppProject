#include <cwchar>
#include <iostream>
#include <list>
#include <ostream>
#include <stdio.h>
#include <stdlib.h>
#include "Animal.h"
#include "POS.h"
#include "Human.h"
#include "Logger.h"

const int C_INIT_NUM = 50;

// 参照渡し 引数:参照変数(=エイリアス)
void funcB(int & refnum, std::list<std::string>& refLogList)
{
    refnum = 80;    // 参照変数の書き換え
    std::cout << "refnum:" << &refnum << std::endl;
    refLogList.push_back("== 参照渡し ==");
}

int main()
{
    // bool型 true:0以外 false:0
    bool flg = true;
    std::cout << "size of bool:" << sizeof(bool) << std::endl;
    flg = 10;
    std::cout << "flg:" << flg << std::endl;
    flg = -10;
    std::cout << "flg:" << flg << std::endl;

    // リスト
    std::list<std::string> LogList;
    LogList.push_back("== start ==");

    // ログ出力
    Logger::Info("Start!!!");

    // スタックメモリのクラスオブジェクト
    char name[] = "Taro Yamada";
    Human human1(name, 20);

    // 動的（ヒープ）メモリのクラスオブジェクト
    int * pNum1    = new int;
    short * pNum2  = new short(50);
    short * pArray = new short[5];
    *pNum1 = 100;
    printf("Num1:%d Num2:%d\n", *pNum1, *pNum2);

    for (int i = 0; i < 5; i++)
    {
        pArray[i] = i;
        printf("pArray[%d]:%d ", i, i);
    }

    // オーバーロード
    POS pos1;
    POS pos2;
    pos1.setPos(100.1, 200.2);
    pos2.setPos(300.3, 400.4);
    POS pos3 = pos1 + pos2;             // +演算子のオーバーロード 左側が主、右側が引数
    //POS pos3 = pos1.operator+(pos2);  // メンバ関数を直接使った呼び出し
    //POS pos3 = pos1.addPos(pos2);     // addPosメンバ関数を作成するより演算子のオーバロードの方が直感的
    pos3.print();

    // 参照渡し
    int num = 50;                                 // 参照先の変数定義
    std::cout << "num:"    << num  << std::endl;
    std::cout << "num   :" << &num << std::endl;
    funcB(num, LogList);         // 引数に参照変数の定義
    std::cout << "num:"    << num  << std::endl;

    // const
    const POS pos4;
    int x = pos4.getX();     // 呼び出しok
    //pos4.setPos(100, 200); // Candidate function not viable: 'this' argument has type 'const POS'
                             // , but method is not marked const
    std::cout << "x:" << x << std::endl;

    // 仮想関数
    Dog dog;
    Cat cat;
    dog.say();
    cat.say();
    // Animalクラスは抽象クラスなので継承して利用する
    //Animal animal = new Animal(); // Unimplimented pure virtual method 'say' in 'Animal' 

    LogList.push_back("== end ==");
    if (flg) {
        for (auto itr = LogList.begin(); itr != LogList.end(); ++itr) {
            std::cout << "log:" << *itr << std::endl;
        }
    }

    delete pNum1;
    delete pNum2;

    Logger::Info("Done!!!");
    return 0;
}
