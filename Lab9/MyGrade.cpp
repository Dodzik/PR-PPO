#include "MyGrade.h"

static int cout=1;

MyGrade::MyGrade(double x){
    grade=x;
    ID=cout++;
}
MyGrade::MyGrade(){
    grade=0;
    ID=0;
}

void MyGrade::print(){
    std::cout<<ID<<" : "<<grade<<"\n";
}

MyGrade::~MyGrade(){
    std::cout<<"Delete grade with id" <<ID<<"\n";
//     ID=NULL;
//     grade=NULL;
}
