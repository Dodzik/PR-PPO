
#include "Vector2D.h"

int Vector2D::count;

Vector2D::Vector2D(double val1, double val2):x(val1),y(val2){
 
    count++;
}






Vector2D::Vector2D():x(0),y(0){
     
        count++;
}

Vector2D::~Vector2D(){
    x=0;
    y=0;
    count--;
}

Vector2D Vector2D::fromCarthesian(double val1, double val2){

return Vector2D(val1,val2);
}


Vector2D Vector2D::fromPolar( double val1, double val2) {

return Vector2D(val1*cos(val2*M_PI/180),val1*sin(val2*M_PI/180));
}

void Vector2D::print(std::string pre)const{
    std::cout<<pre<<"=("<<x<<","<<y<<")\n";
}

double Vector2D::dot(const Vector2D& dummy)const{
        return x*dummy.x+y*dummy.y;
        }

Vector2D Vector2D::add(const Vector2D &dummy)const {
    return fromCarthesian(x+dummy.x, y+dummy.y);
}

Vector2D::Vector2D(const Vector2D &other):x(other.x),y(other.y){
  std::cout<<" copying: ";


    count++;
}

Vector2D::Vector2D(Vector2D &&other):x(other.x),y(other.y){
    std::cout<<" moving: ";
    other.print();   

    other.x=0;
    other.y=0;

    count++;
}