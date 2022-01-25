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

void POS::print()
{
    printf("x:%lf y:%lf\n", x, y);
}