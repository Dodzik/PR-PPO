#pragma once 
#include <iostream>
#include "Coordinates.h"
class MapPoint
{
    friend double surfaceTriangleArea(MapPoint dummy1,MapPoint dummy2,MapPoint dummy3);
  Coordinates cord;
  std::string name;
  public:
   MapPoint(std::string data="",double lati=0, double longi=0);

   Coordinates GetCoordinates()const;

   Coordinates &GetCoordinates();

  void Print();


    void SetId(std::string na);

    static int &NumberOfPoints();
};
double surfaceTriangleArea(MapPoint dummy1,MapPoint dummy2,MapPoint dummy3);
