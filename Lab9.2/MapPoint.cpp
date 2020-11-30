#include "MapPoint.h"

MapPoint::MapPoint(std::string dummy,double longi,double lati){
    str=dummy;
    if(longi>0){
    polkulaEW='E';
    longitude=longi;
    }
    else {polkulaEW='W';
    longitude=longi;
    }
    if(lati>0){
    polkulaNS='N';
    latitude=lati;
    }
    else {polkulaNS='S';
    latitude=lati;
    }
}

MapPoint::MapPoint(std::string dummy,double longi,char x,double lati,char y){
    str=dummy;
    polkulaEW=x;
    polkulaNS=y;
    if(x=='W')longi=longi*-1;
    longitude=longi;
    if(x=='s')lati=lati*-1;
    latitude=lati;

}

void MapPoint::print()const{
    std::cout<<"Wspolrzedne dla "<<str<<": "<<fabs(longitude)<<polkulaEW<<", "<<fabs(latitude)<<polkulaNS<<"\n";
}
void MapPoint::movePoint(double longitudeShift,double latitudeShift){
    longitude+=longitudeShift;
    latitude+=latitudeShift;
    if(longitude<0){ 
            polkulaEW='W';
    }
        else polkulaEW='E';
    if(latitude<0){
            polkulaNS='S';
    }
        else polkulaNS='N';
    

}
MapPoint MapPoint::closestFrom(MapPoint* dummy1,MapPoint* dummy2)const{
    if(hypot(longitude-dummy1->longitude,(latitude-dummy1->latitude))>hypot((longitude-dummy2->longitude),(latitude-dummy2->latitude )))
    {
        return *dummy2;
    }
    else{
        return *dummy1;
    }

}

std::string MapPoint::getName()const{
    return str;
}
MapPoint inTheMiddle(MapPoint *dummy1, MapPoint *dummy2, std::string kra){
    return MapPoint(kra,dummy1->longitude-dummy2->longitude,dummy1->latitude-dummy2->latitude);
}


MapPoint::~MapPoint(){
    std::cout<<"Usuwanie "<<str<<"\n";
}