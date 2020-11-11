#pragma once
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <cstdio>
#include <cstring>
//struktura przechowująca łańcuch i nazwe danej struktury
struct MyText {
    char * str;
    const char *  name;

};
//funckja zmiania dany czar w zależnosci na duża i mała litere
char my_uptolow_lowtoup(char a);
//funkcja innitializująca strukture
MyText* initMyText(const char * kra);
//funkcja sprawdza czy w dana struktura nie ma pustego łańcucha
bool empty(MyText * vv);
//zwraca łańcuch danej struktury
const char * getCString(MyText * dummy);
//dodaje dane łańcuch do łancucha przechowywanego przez strukture
MyText *  append(MyText * dummy,const char * string);
//Wyświetla nazwe struktury i łańcuch w niej przechowywany
void nicePrint(MyText* dummy);
//zwraca długosc lancucha przechowywanego przez strukture
int size(MyText * dummy);
//zmienia wszystkie wystąpenia znaku który znajduje sie na indeksie a 
// na char o nazwiee por
void setChar(MyText * dummy, int a,const char por);
//tworzy nowa strukture o innej nazwie ktora jest klonem podanej struktury
MyText * initMyText(const char* a, MyText*dummy);
//zamienia duże i male litery w lanuchu
void modify(MyText* dummy, char(*f)(char));
//zamienia duże i male litery w lanuchu
void modify(MyText*dummy,int f(int));
//zwalnia pamiec lanucha
void clear(MyText*dummy);
//zwalnia pamiec struktury
void erase(MyText* dummy, int a, int b);
