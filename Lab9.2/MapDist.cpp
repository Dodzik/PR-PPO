#include "MapDist.h"

MapDist::MapDist(double x,double y){
    dist_lati=x;
    dist_longi=y;
}
MapDist::MapDist(MapPoint dummy,MapPoint dummy2){
        double x=fabs(dummy.latitude-dummy2.latitude);
        double y=fabs(dummy.longitude-dummy2.longitude);
        dist_lati=x;
        dist_longi=y;
}
double MapDist::getlongitude()const{
    return dist_longi;
}
double MapDist::getlatitude()const{
    return dist_lati;
}

double MapDist::angularDistance()const{
    double dis=hypot(dist_lati, dist_longi);
    return dis;
}

MapDist distance(MapPoint dummy,MapPoint dummy2){
    //  MapDist *bigdummy=new MapDist;
    //     bigdummy->dist_lati=fabs(dummy.latitude-dummy2.latitude);
    //     bigdummy->dist_longi=fabs(dummy.longitude-dummy2.longitude);
    // return *bigdummy;
    return MapDist(fabs(dummy.latitude-dummy2.latitude),fabs(dummy.longitude-dummy2.longitude));
}