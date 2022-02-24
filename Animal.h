#pragma once

class Animal
{
public:
    virtual void say() = 0;     // 純粋仮想関数（=0:この関数を直接使用せず、派生クラスで使用する）
    virtual ~Animal();          // 仮想デストラクタ
};

class Dog : Animal
{
public:
    void say();
};

class Cat : Animal
{
public:
    void say() override;
};