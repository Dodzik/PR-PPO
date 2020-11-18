#pragma once
#include <iostream>

class Vector{
    public:
        Vector(int x=0);

        void Print()const;

        Vector(int x,int y,int z);

        int get(int x)const;
       
        int &at(int x);

        int Dot(Vector dummy)const;
        Vector Times(Vector dummy)const;
        void Set(Vector dummy);
    private:
    int tab[3];
    };
