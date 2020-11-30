#pragma once
#include <string>
#include <iostream>
#include <math.h>  

#include "MapDist.h"
class MapDist;

class MapPoint{
    friend class MapDist;
    friend MapDist distance(MapPoint dummy,MapPoint dummy2);
    friend MapPoint inTheMiddle(MapPoint *dummy1, MapPoint *dummy2, std::string kra);

    public:
    
    ~MapPoint();
    

    MapPoint(std::string dummy,double longi,double lati);

     MapPoint(std::string dummy,double longi,char x,double lati,char y);

    void print()const;

    void movePoint(double longitudeShift,double latitudeShift);

    MapPoint closestFrom(MapPoint* dummy1,MapPoint* dummy2)const;

    std::string getName()const;

    private:

    std::string str;
    double longitude;
    double latitude;
    char polkulaEW;
    char polkulaNS;
};