#include "lab07.h"

Vector *form_Vector(int x,int num){
    Vector *dummy=new Vector;
    dummy->tab= new int[x];
    dummy->rozm=x;
    for(int i=0;i<x;i++){
        dummy->tab[i]=num;
    }
    return dummy;
}

Matrix *form_Matrix(int y,int x,int num){
    Matrix *dummy=new Matrix;
    dummy->tab=new int *[y];
    for(int i=0;i<y;i++){
     *(dummy->tab+i)=new int[x];
}
        dummy->x=x;
        dummy->y=y;
        for(int i=0;i<dummy->y;i++){
        
        for(int j=0;j<dummy->x;j++){
            dummy->tab[i][j]=num;
        }
        // std::cout<<"\n";
    }
        return dummy;
    }

void print(Vector  k){
    for(int i=0;i<k.rozm;i++){
        std::cout<<k.tab[i];
    }
    std::cout<<"\n";
}

void print(const Matrix  k){
    for(int i=0;i<k.y;i++){
        
        for(int j=0;j<k.x;j++){
            std::cout<<k.tab[i][j];
        }
        std::cout<<"\n";
    }
}
void deleteAll(Vector *dummy){
    delete[] dummy->tab;
    delete dummy;
}
void deleteAll(const Matrix* dummy){
    // dummy->tab=new int *[y];
    for(int i=0;i<dummy->y;i++){
     delete[] *(dummy->tab+i);
}
delete[] dummy->tab;
delete dummy;
}
bool addFirstToSecond(Vector w2,Vector &w1){
    if(w2.rozm!=w1.rozm){
        return false;
    }
    else{
        for(int i=0;i<w1.rozm;i++){
            w1.tab[i]=w1.tab[i]+w2.tab[i];
        }
        return true;
    }
}
void setNewDimension(Vector &w2, int nrozm){
  
    int* ntab=new int[nrozm];
    for(int i=0;i<w2.rozm;i++){
        ntab[i]=w2.tab[i];
    }
    delete[] w2.tab;
    w2.tab=ntab;
    w2.rozm=nrozm;
}
