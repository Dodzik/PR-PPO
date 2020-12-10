#pragma once 
#include <initializer_list>
#include <iostream>

class MyNode{
    //zaprzyjaźniona klasa
    friend class MyList;
    //zaprzyjaźniona funkcja
    friend void zwolnij(MyNode* dummy);

public:
    //zwraca wartość danego elementu
    int val();

    //konstruktor MyNode o zmiennej value =x
    MyNode(int x);

    //konstruktor MyNode o zmiennej value = 0
    MyNode();

    //destruktor
    ~MyNode();

private:

    int value;
    //wskaźnik na nastepny element
    MyNode* next;
};

//funkcja pomocnicza przy zwalnianiu pamięci "rekurencja"
void zwolnij(MyNode* dummy);
////////////////////////////////////////////////////////////////////////////////////


class MyList{

    

     public:
//destruktor
~MyList();
//konstruktor tworzący liste z head i tail wskazującymi na nullptr i _size =0
MyList ();
//konstruktor my list wypełniający liste x kolejnymi liczbami całkowitymi
MyList (int x);

//konstruktor initializer_list tworzący liste o zadanych liczbach
MyList(std::initializer_list<int> l );

//funkcja wyświetlająca liste
void print()const;

//zwraca _size
int size()const;

//funkcja czyszcząca liste
void clear();
//sprawdza czy lista jest pusta
bool empty()const;
//dodaje daną wartość na koniec listy
void add(int x);

//konstruktor kopiujący
MyList(const MyList &other);

//konstruktor przenoszący
MyList( MyList &&other);
//konstruktor wykorzystujący zadaną funkcje fun przy wylicaniu kolejnych wartość listy
MyList (int (*fun)(MyNode*), int ilosc);

    private:
    //przchowuje adres pierwszego elementu
MyNode* head;
//przechowuje adres ostatniego elementu
MyNode* tail;
//przechowuje zmienna mówiącą o ilosci elementów w tablicy
int _size;


};

