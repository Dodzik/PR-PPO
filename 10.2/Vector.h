#pragma once
#include <iostream>
#include <math.h>

class Vector{
    public:
        Vector(int x);

        void print(std::string kra)const;

        ~Vector();

        int &at(int x);

        static int dot(Vector dummy,Vector dummy2);


        Vector(const Vector &other);

        double norm()const;

        operator double()const;

        static Vector sum(Vector dummy1, Vector dummy2);

        static Vector sum(Vector dummy1, int x);

        Vector( Vector &&other);

    private:
    int *tab;
    int size;
    };