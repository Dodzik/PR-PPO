#pragma once
#include <iostream>
#include <string.h>
#include <cstring>
 
 struct Elem{
    char* data;
    struct Elem * next; 
};

struct MyList{
     struct Elem *  head;
};

void prepare(struct MyList * testList);

void add(struct MyList* testList,char* buffer);

bool empty(const struct MyList* lptr);

void dump(const struct MyList* cur);

void clear(struct MyList * testList);
