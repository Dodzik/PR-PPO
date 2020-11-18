#include "Vector.h"

Vector::Vector(int x){
            tab[0]=x;
            tab[1]=x;
            tab[2]=x;
}
Vector::Vector(int x,int y,int z){
            tab[0]=x;
            tab[1]=y;
            tab[2]=z;
}

void Vector::Print() const{
    std::cout<<"( "<<tab[0]<<" "<<tab[1]<< " "<<tab[2]<<" )\n";
}

int Vector::get(int x)const {
    return tab[x];
}
int &Vector::at(int x){
    return tab[x];
}
int Vector::Dot(Vector dummy)const{
    return tab[0]*dummy.at(0)+tab[1]*dummy.at(1)+tab[2]*dummy.at(2);
}

Vector Vector::Times(Vector dummy)const{
    // Times:	V x W = ( v2*w3-w2*v3, -v1*w3+w1*v3, v1*w2-v2*w1 )
    Vector fin(0);
    fin.at(0)=tab[1]*dummy.at(2)-dummy.at(1)*tab[2];
    fin.at(1)=-tab[0]*dummy.at(2)+dummy.at(0)*tab[2];
    fin.at(2)=tab[0]*dummy.at(1)-tab[1]*dummy.at(0);

    // for(int i=0;i<3;i++){
    
    // fin.at(i)=tab[i]*dummy.at(i);
    // if(i%2==1){
    //     fin.at(i)=fin.at(i)*-1;
    // }
    // }
    return fin;
}

void Vector::Set(Vector dummy){
    tab[0]=dummy.at(0);
    tab[1]=dummy.at(1);
    tab[2]=dummy.at(2);
}
