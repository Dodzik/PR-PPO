#pragma once

#include <iostream>
#include <stdio.h>
#include <string.h>
#include "Book.h"

class BooksShelf{
    public:

    ~BooksShelf();

    BooksShelf(int co);

    void add(Book dummy);

    void remove(int q);

    void print()const;

    BooksShelf(const BooksShelf &other);

    private:
    Book *tab;
    int x=0;
    int size=0;
};
