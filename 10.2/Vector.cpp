#include "Vector.h"



Vector::Vector(int x){
    tab=new int [x];
    size=x;
    for(int i;i<x;i++){
        tab[i]=0;
    }
}


void Vector::print(std::string kra) const{
    std::cout<<kra<<"(";
    for(int i=0;i<size; i++){
        std::cout<<tab[i];
        if(i<size-1){
            std::cout<<",";
        }
    }
    std::cout<<") \n";
}

int &Vector::at(int x){
    return tab[x];
}


Vector::Vector(const Vector &other){
  size=other.size;
  tab=new int[size];
  for(int i=0;i<size;i++){
  at(i)=other.tab[i];

  
  }
}

int Vector::dot(Vector dummy,Vector dummy2){
    int count=0;
    for(int i=0;i<dummy.size;i++){
        count=count+dummy2.at(i)*dummy.at(i);
    }
    return count;
}

double Vector::norm()const{
  double res =0;
  for(int i=0;i<size;i++){
     res+=tab[i]*tab[i];
  }
  return sqrt(res);
}

Vector::operator double()const{
  return norm();
}


Vector Vector::sum(Vector dummy1, Vector dummy2){

    Vector kra(dummy1.size);
    for(int i=0;i<kra.size;i++){
        kra.at(i)=dummy1.at(i)+dummy2.at(i);
    }
    return kra; 
}

Vector::Vector( Vector &&other){

   size=other.size;
  tab=new int[size];
  for(int i=0;i<size;i++)
  at(i)=other.tab[i];
  
 
  
}

 Vector Vector::sum(Vector dummy1, int x){
     Vector kra (dummy1.size);
    for(int i=0;i<kra.size;i++){
        kra.at(i)=dummy1.at(i)+x;
    }
    return kra;
    
 }

Vector::~Vector(){ 
    size=0;
    delete []tab;
    
}