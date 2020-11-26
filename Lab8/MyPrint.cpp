#include "MyPrint.h"


 MyPrint::MyPrint(int x){
     star=x;
     count=0;
 }

void MyPrint::init(int x){
    star=x;
    count=0;
}
void MyPrint::printLine(){
    for(int i=0;i<star*2;i++){
    std::cout<<"*";
    if(i==star)std::cout<<++count;
    }
    std::cout<<"\n";
}
