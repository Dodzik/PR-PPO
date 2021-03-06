#pragma once
#include <string>
#include <iostream>
#include <cmath>


class Vector2D{

    public:
    
    ~Vector2D();
    static int count;
   
    static Vector2D fromCarthesian(double val1, double val2);


    static Vector2D fromPolar( double val1, double val2);

    void print(std::string pre="")const;


    double dot(const Vector2D &dummy)const;
    Vector2D add(const Vector2D& dummy)const;

    Vector2D(const Vector2D &other);

    Vector2D(Vector2D &&other);

    private:

    Vector2D(double val1, double val2);
     Vector2D();

    double x;
    double y;
   
};