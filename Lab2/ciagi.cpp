#include <iostream>
#include "ciagi.h"


  float *inicjalizujArytmetyczny(int rozmiarCiagu,float roznicaCiagu){
    float first=0;
    float *tab=(float*)malloc(rozmiarCiagu * sizeof(float));
    *tab=first;
      for(int i=1;i<rozmiarCiagu;i++){
        *(tab+i)=*(tab+i-1)+roznicaCiagu;
    }
    return tab;
}
void wypiszCiag(int rozmiarCiagu,float * ciagArytmetyczny){
  for(int i=0;i<rozmiarCiagu;i++){
    std::cout << ciagArytmetyczny[i]  << std::endl;
  }
  
}
  void posprzatajCiag(float * ciag){
    std::free(ciag);
  }
  float *inicjalizujGeometyczny(int rozmiarCiagu, float ilorazCiagu){
    float first=1;
    float *tab2=(float*)malloc(rozmiarCiagu * sizeof(float));
    *tab2=first;
      for(int i=1;i<rozmiarCiagu;i++){
        *(tab2+i)=*(tab2+i-1) * ilorazCiagu;
    }
    return tab2;

  }
  float minimumCiagu(int rozmiarCiagu, float * ciagGeometryczny){
    float min= *(ciagGeometryczny) ;
    for(int i=0;i<rozmiarCiagu;i++){
      if(min>*(ciagGeometryczny+i))
      {
        min=*(ciagGeometryczny+i);
      }
    }
    return min;
  }
  float maximumCiagu(int rozmiarCiagu, float * ciagGeometryczny){
    float max=*ciagGeometryczny ;
    for(int i=0;i<rozmiarCiagu;i++){
      if(max<*(ciagGeometryczny+i)){
        max=*(ciagGeometryczny+i);
      }
    }
    return max;
  }
  float sumaCiagu(int rozmiarCiagu, float * ciagArytmetyczny){
    float suma=0;
    for(int i=0;i<rozmiarCiagu;i++){
      suma+=*(i+ciagArytmetyczny);
    }
    return suma;
  }
  float* dodajCiagi(int nowyRozmiar,float* ciagArytmetyczny,float* ciagGeometyczny){
    float *tab3=(float*)malloc(nowyRozmiar * sizeof(float));
    for(int i=0;i<nowyRozmiar;i++){
      *(tab3+i)=*(ciagArytmetyczny+i)+*(ciagGeometyczny+i);
    }
    return tab3;
  }
bool czyJestArytmetyczny(int rozmiarCiagu, float* ciag){
  int a=0;
  float roznica=*(ciag+1)-*(ciag);
  std::cout<<roznica<<std::endl;
  for(int i=1;i<rozmiarCiagu;i++){
    
    if((*(ciag+i)-*(ciag+i-1))!=roznica){
      std::cout<<*(ciag+i)-*(ciag+i-1)<<std::endl;
      a=a+1;
    }
  }
  if(a==0){
    return true;
  }
  return false;
}
