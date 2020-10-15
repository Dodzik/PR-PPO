#pragma once
#include  <cstring>
#include <stdlib.h>
#include <iostream>
#include <cmath>
struct MapPoint{
    char* name;
    double lati;
    double longi;

};
MapPoint constructMP(char* name,double lati,double longi);
void print(struct MapPoint dummy);
double distance(struct MapPoint dummy, struct MapPoint dummy2);
void movePoint(MapPoint& dummy,double new_lati,double new_longi);
struct MapPoint inTheMiddle(struct MapPoint dummy, struct MapPoint dummy2,const char* name);
void clear(struct MapPoint dummy);
void clear(int rozmiar,struct MapPoint** tab);
