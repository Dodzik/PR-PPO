#include "MapPoint.h"

int count=0;
MapPoint::MapPoint(std::string data,double lati, double longi)
{
 name=data;
 cord=Coordinates(longi,lati);
 count++;
}
Coordinates MapPoint::GetCoordinates()const
{
  return cord;
}
Coordinates &MapPoint::GetCoordinates()
{
  return cord;
}
void MapPoint::Print(){
    std::cout<<"Point: "<<name<<" ("<<cord.Longitude()<<" : "<<cord.Latitude()<<") "<<"\n";
}

void MapPoint::SetId(std::string na){
    name=na;
}

int &MapPoint::NumberOfPoints(){
    return count;
}
double surfaceTriangleArea(MapPoint dummy1,MapPoint dummy2,MapPoint dummy3){
   
    return 0.5 * ((dummy2.cord.Longitude()-dummy1.cord.Longitude())*
     (dummy3.cord.Latitude()-dummy1.cord.Latitude())-(dummy3.cord.Longitude()-dummy1.cord.Longitude())*
    (dummy2.cord.Latitude()-dummy1.cord.Latitude()));
}
