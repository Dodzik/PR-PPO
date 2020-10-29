#pragma once
#include <string.h>
#include <cstring>

// struktura Delimited
struct Delimited{
    const char *str;
    char ch;
    const char *fragmentST;
    const char *indeksED;
};
//tworzy strukture pomocniczą Delimited
void chunk(const char* textOne,struct Delimited *del,const char por );
//zwraca długość przechowywanego fragmentu tekstu
int fragment_size(const struct Delimited *del);
//kopiuje fragment teksty do tablicy jesli buffor jest przepełniony zwraca błąd
//fragment jest dzielony względem zmiennej char którą podaje użytkownik
void get_fragment(const struct Delimited *del,char *buffer );
//sprawdza czy jest kolejny wyraz jesli go nie ma zwraca wartosc false
bool next(struct Delimited *del );
//powraca wskaznikiem na poczatek tesktu
void rewind(struct Delimited *del );
//wraca jeden wyraz do tyłu
bool prev(struct Delimited *del );
