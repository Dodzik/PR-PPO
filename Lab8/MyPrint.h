#pragma once
#include <iostream>

class MyPrint{
    public:
   
    //konstruktor o zadanej ilości gwiazde

    MyPrint(int x=0);

    //zmienia zmienną która przechowuje ilość giwazdek w linii

    void init(int x);

    //funkcja wypisująca linie
    //i zwiekszająca "count" o 1 po każdym wykonaniu
    void printLine();

    private:
    //ilosc gwiazde w linii/2
    int star;
    //zmienna numerowanie linii
    int count;
};
