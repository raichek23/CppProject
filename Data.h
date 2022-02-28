#pragma once

class Data
{
public:
    int m_data;

    Data() : m_data(0) {};
    Data(int data) : m_data(data) {};

    int get()
    {
        return m_data;
    }
};