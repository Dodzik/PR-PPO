#pragma once
#include <iostream>
#include "MyGrade.h"

//Klasa MyRegister przchowująca MyGrade
class MyRegister{

    
        public:

        //destruktor MyRegister
         ~MyRegister();

    //Konstruktor MyRegister przy podanym rozmiarze x
    MyRegister(int x);

    //funckja dodawająca oceny do MyRegister
    void addGrade(MyGrade* dummy);

    //funckja która próbuje dodać ocene do MyRegister typu const
    void addGrade(MyGrade* dummy)const;

    //funkcja wyświetlająca
    void showRegister();

    //funckja tworząca kopie typu const danej classy MyRegister
    MyRegister* backup()const;

    //funkcja wyświetlająca MyRegister typu const
    void showRegister()const;

    //funckja zwalniająca pamięć
    void clearRegister();

        private:
    //tablica przechowująca MyGrade
    MyGrade *tab=NULL;
    //licznik ilość ocen w MyRegister
    int num=0;
    //rozmiar danego MyRegister
    int size=0;
};

