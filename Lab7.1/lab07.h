#pragma once
#include <iostream>

struct Vector{
    int *tab;
    int rozm;
};
struct Matrix{
    int **tab;
    int x;
    int y;

};

Vector *form_Vector(int x=3,int num=0);
void print(Vector  k);
Matrix *form_Matrix(int y=3,int x=3,int num=0);
void print(const Matrix  k);
void deleteAll(Vector *dummy);
void deleteAll(const Matrix* dummy);
bool addFirstToSecond(Vector w2,Vector  &w1);
void setNewDimension(Vector &w2, int nrozm);
