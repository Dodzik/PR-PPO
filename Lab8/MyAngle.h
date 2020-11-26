#pragma once
#include <cmath>
#include <iostream>
class MyAngle{
    public:
    // konstruktor MyAngle o zadnym kącie
    // x - kąt w stopniach
    // y - kąt w radianach
    MyAngle(double x=0,double y=0);

    //funkcja zmieniająca kąt w radianach

    void setRadians(double x);

    //funkcja zmieniająca kąt w stopniach

    void setDegrees(double x);

    //funkcja przeliczająca stopnie na radiany

    double &toRad();

    //funkcja przeliczająca radiany na stopnie

    double &toDeg();

    //konstruktor na podstawie innego obiektu MyAngle

    void setAngle(MyAngle &dummy);

    //funkcja dodająca podany kąt podanego obiektu do aktualnego

    void addAngle(MyAngle &dummy);


    //funkcje pozwalające zwrócic kąt w stopniach i radianach
    double getDeg();
    double getRad();

    private:
    //stała pi
    double pi=3.14159265358979323846;
    //zmienna przechowująca kąt w stopniach
    double val_deg;
    //zmienna przechowująca kąt w radianach
    double val_rad;
};
// funkcja obliczająca różnice między kątami w zakresie od 0 do 180
MyAngle distance(MyAngle &dummy1, MyAngle &dummy2);
