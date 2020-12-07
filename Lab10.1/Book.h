#pragma once 

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <iomanip>

class Book{
    public:
    Book(const char *x);

    ~Book();

    friend class BooksShelf;

    Book();

    private:
    std::string wyraz;
};