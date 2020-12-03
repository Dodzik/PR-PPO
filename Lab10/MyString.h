#pragma once
#include <iostream>
#include <stdio.h>
#include <string.h>

class MyString{
    public:

    ~MyString();

    MyString(const char* x);

    MyString();

    char* str()const;

    char* subStr(int x,int y)const;

    private:
    char* wyraz=nullptr;
};