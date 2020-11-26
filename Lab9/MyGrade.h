#pragma once
#include <iostream>

//klasa my grade posiadająca pole double ocene i pole ID 
class MyGrade{
    
        public:

    //destruktor MyGrade
    ~MyGrade();

    //Konstruktor oceny o podanej wartość
    MyGrade(double x);

    //funckja wyświetlająca ocene
    void print();

    //funkcja allokująca pamięć dla MyGrade
    MyGrade();


        private:

    //pole ocena
    double grade;

    //pole ID
    int ID;
};
