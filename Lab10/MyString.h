#pragma once
#include <iostream>
#include <stdio.h>
#include <string.h>

class MyString{
    public:

    ~MyString();

    MyString(const char* x);

    MyString();
     MyString(const MyString &other) : wyraz(other.wyraz)
        // Copy constructor 
            {
                std::cout<<"CTOR(copy) = <"<<wyraz<<">\n";
               int x=strlen(wyraz);
                wyraz = new char [strlen(wyraz) + 1];
                for(unsigned i = 0; i <x; i++){
                   
                    wyraz[i]=other.wyraz[i];}
                     std::cout<<"CTOR(copy) = <"<<wyraz<<">\n";
               
                 
            };

    char* str()const;

    char* subStr(int x,int y)const;

    private:
    char* wyraz;
};