
#include "MapPoint.h"




struct MapPoint constructMP(char* name,double lati,double longi){
    struct MapPoint dummy;
    dummy.name= (char*) malloc(strlen(name)*(sizeof(char)+1));
    strcpy(dummy.name,name);
    
    dummy.lati=lati;
    dummy.longi=longi;
    return dummy;
}

void print(struct MapPoint dummy){
    if(dummy.lati>=0){
        std::cout<<
     "Punkt na mapie <"<<dummy.name<<"> ma wspolrzedne [ "<<dummy.lati<<" N,  ";
    }
    else{
         std::cout<<
        "Punkt na mapie <"<<dummy.name<<"> ma wspolrzedne [ "<<fabs(dummy.lati)<<" S,  ";
    }
    if(dummy.longi>=0){
        std::cout<<
        dummy.longi<<" E ]\n";
    }
    else{
        std::cout<<
        fabs(dummy.longi)<<" W ]\n";

    }
    //  std::cout<<
    //  "Punkt na mapie <"<<dummy.name<<"> ma wspolrzedne [ "<<dummy.lati<<" N,  "<<dummy.longi
    //  <<" E ]\n";
    //printf("Nazwa: %s szerogosc: %f długosc: %f ",dummy.name,dummy.lati,dummy.longi);
}

double distance(struct MapPoint dummy, struct MapPoint dummy2){
        double x=fabs(dummy.lati-dummy2.lati);
        double y=fabs(dummy.longi-dummy2.longi);
        double dis=0;
        dis=hypot(x,y);
    return dis;
}
void movePoint(MapPoint& dummy,double new_lati,double new_longi){
     dummy.lati=new_lati;
     dummy.longi=new_longi;
}
struct MapPoint inTheMiddle(struct MapPoint dummy, struct MapPoint dummy2,const char* name){
    
    struct MapPoint output;
    output.name=(char*)malloc((strlen(name)+1)*sizeof(char));
    for(int i=0;i<strlen(name);i++){
        strcpy(output.name,(name+i));
        // output.name=output.name+*(name+i);
    }
    output.lati=dummy.lati-dummy2.lati;
    output.longi=dummy.longi-dummy2.longi;
    return output;
}
void clear(struct MapPoint dummy){
    free(dummy.name);
}
void clear(int rozmiar,struct MapPoint** tab){
    for(int i=0;i<rozmiar;i++){
         clear(**(tab+i));
       
    }
}   
