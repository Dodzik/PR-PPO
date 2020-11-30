#pragma once
#include <string>
#include <iostream>
#include <math.h>

#include "MapPoint.h"
class MapPoint;

class MapDist{
    friend class MapPoint;
    friend MapDist distance(MapPoint dummy,MapPoint dummy2);

    public:
    MapDist(MapPoint dummy,MapPoint dummy2);
    MapDist(double x=0,double y=0);
    

    double getlongitude()const;

    double getlatitude()const;


    double angularDistance()const;

    private:
    double dist_lati;
    double dist_longi;

};
MapDist distance(MapPoint dummy,MapPoint dummy2);