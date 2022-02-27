#include <stdio.h>
#include "POS.h"

// 引数なしコンストラクタ
POS::POS()
{
    this->x = 0;
    this->y = 0;
}

// コピーコンストラクタ
POS::POS(const POS& pos)
{
    //pos.x = 100;  // Variable 'pos' declared const here
    this->x = pos.x;
    this->y = pos.y;
}

// 引数ありコンストラクタ
POS::POS(double tmpx, double tmpy)
{
    this->x = tmpx;
    this->y = tmpy;
}

POS::~POS()
{
    // NOP
}

int POS::getX() const  // 自オブジェクトのメンバ変数の変更を禁止する
{
    return this->x;
}

int POS::getY() const
{
    return this->y;
}

// 任意座標の設定
int POS::setPos(double tmpx, double tmpy)
//int POS::setPos(double tmpx, double tmpy) const // Member function 'POS::setPos' is declaed const here
{
    if(tmpx < 0 || tmpy < 0)
    {
        return -1;
    }
    x = tmpx;
    y = tmpy;
    return 0;
}

// 3D座標の設定
int POS::setPos(S_Pos3D pos3d)
{
    if (pos3d.x < 0 || pos3d.y < 0) {
        return -1;
    }
    this->x = pos3d.x;
    this->y = pos3d.y;
    return 0;
}

void POS::print()
{
    printf("x:%lf y:%lf\n", x, y);
}

POS POS::operator+(POS rhs)
{
    POS pos;
    printf("\nthis.x:%lf rhs.x:%lf\n", this->x, rhs.x);
    pos.x = this->x + rhs.x;
    pos.y = this->y + rhs.y;
    return pos;
}