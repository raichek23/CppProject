#pragma once

#include "Data.h"
#include <cstdio>
class Child
{
public:
    Child(Data& data) : m_data(data) {};
    void exec()
    {
        printf("m_data.get():%d\n", m_data.get());
    }
private:
    Data& m_data;
};