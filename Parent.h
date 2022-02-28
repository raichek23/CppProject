#pragma once

#include "Data.h"
#include "Child.h"

class Parent
{
public:
    Parent(Data& data) : m_child(data) {};
    void exec()
    {
        m_child.exec();
    }

private:
    Child m_child;
};