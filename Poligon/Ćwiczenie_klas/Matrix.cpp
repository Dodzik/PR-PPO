#include "Matrix.h"

Matrix::Matrix(const Vector x){
    for(int i=0;i<3;i++){
    tab[i]=x;
    tab[i]=x;
    tab[i]=x;
    }
}
void Matrix::Print(){
    for(int i=0;i<3;i++){
        std::cout<<"( "<<tab[i].at(0)<<" "<<tab[i].at(1)<<" "<<tab[i].at(2)<<" )\n";
    }
}
Vector &Matrix::at(int x){
    return tab[x];
}
void Matrix::Set(Vector dummy){
    tab[0].at(0)=dummy.at(0);
    tab[1].at(1)=dummy.at(1);
    tab[2].at(2)=dummy.at(2);
}

Vector Matrix::Times(Vector dummy){
    Vector fin(0);

    for(int i=0;i<3;i++){
    fin.at(i)=tab[i].Dot(dummy);
    }
    return fin;
}
