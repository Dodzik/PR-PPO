#pragma once


  float* inicjalizujArytmetyczny(int rozmiarCiagu,float roznicaCiagu);
  void wypiszCiag(int rozmiarCiagu, float * ciagArytmetyczny);
  float sumaCiagu(int rozmiarCiagu, float * ciagArytmetyczny);
  float *inicjalizujGeometyczny(int rozmiarCiagu, float ilorazCiagu); 
  void posprzatajCiag(float * ciagArytmetyczny);
  float minimumCiagu(int rozmiarCiagu, float * ciagGeometyczny);
  float maximumCiagu(int rozmiarCiagu, float * ciagGeometyczny);
  float* dodajCiagi(int nowyRozmiar,float* ciagArytmetyczny,float* ciagGeometyczny); 
  bool czyJestArytmetyczny(int rozmiarCiagu, float* ciag);