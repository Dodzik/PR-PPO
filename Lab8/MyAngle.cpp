#include "MyAngle.h"

MyAngle::MyAngle(double x,double y){
    val_deg=x;
    val_rad=y;
}

void MyAngle::setRadians(double x){
    
        x=std::fmod(x,(2*pi));
    
    val_rad=x;
    val_deg=(x*360)/(2*pi);
}

void MyAngle::setDegrees(double x){
    
    x=std::fmod(x,360);
    if(x<0){
        x=x+360;
    }
    //std::cout<<x;
    val_deg=x;
    val_rad=std::fmod((x*2*pi)/360,2*pi);
}
double MyAngle::getDeg(){
    return val_deg;
}

double MyAngle::getRad(){
    return val_rad;
}

double &MyAngle::toRad(){
    double rad =(val_deg*2*pi)/360;
    rad=std::fmod(rad,(2*pi));
    val_rad=rad;
    return val_rad;
}

double &MyAngle::toDeg(){
    // std::cout<<"\n"<<val_deg<<"\n";
    double deg =(val_rad*360)/(2*pi);
    
    val_rad=deg;
    return val_rad;
}
void MyAngle::setAngle(MyAngle &dummy){
    val_deg=dummy.toDeg();
    val_rad=dummy.toRad();
}
void MyAngle::addAngle(MyAngle &dummy){
    val_deg=val_deg+dummy.toDeg();
    val_rad=val_rad+dummy.toRad();
}

MyAngle distance(MyAngle &dummy1, MyAngle &dummy2){
    MyAngle fin;
      double deg;
      deg=dummy1.getDeg()-dummy2.getDeg();
      if(deg>180){
          deg=360-deg;
      }
    
    fin.setDegrees(deg);
    return fin;
}
