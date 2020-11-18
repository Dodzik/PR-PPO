#pragma once
#include "Vector.h"

class Matrix{

    public:
    
    Matrix(const Vector x);
    void Print();
    Vector &at(int x);
    void Set(Vector dummy);
    Vector Times(Vector dummy);
    private:
    Vector tab[3];
};
