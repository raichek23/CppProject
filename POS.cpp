#include <stdio.h>
#include "POS.h"

POS::POS()
{
    x = 0;
    y = 0;
}

POS::~POS()
{
}

int POS::setPos(double tmpx, double tmpy)
{
    if(tmpx < 0 || tmpy < 0)
    {
        return -1;
    }
    x = tmpx;
    y = tmpy;

    return 0;
}

void POS::print()
{
    printf("x:%lf y:%lf\n", x, y);
}