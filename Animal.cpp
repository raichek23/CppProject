#include "Animal.h"
#include <iostream>
#include <ostream>

Animal::~Animal()
{
    // NOP
}

void Dog::say()
{
    std::cout << "わん！" << std::endl;
}

void Cat::say()
{
    std::cout << "にゃん" << std::endl;
}