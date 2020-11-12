#pragma once
#include <iostream>
#include <string.h>

struct MyDir {
    std::string name;
    MyDir * parent;
    MyDir * child1;
    MyDir * child2;
    MyDir * child3;
};

void initDir(MyDir &root, std::string str);
void printDir(MyDir dummy,int x=2);
MyDir* addDir(MyDir &root, std::string str);
void addDir(MyDir &root, MyDir &dummy);
void  clearDir(MyDir &root);
