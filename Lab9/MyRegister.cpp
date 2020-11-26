#include "MyRegister.h"


MyRegister::MyRegister(int x){
    tab=new MyGrade [x];
    size=x;
}
void MyRegister::addGrade(MyGrade* dummy){
    if(num!=size){
    *(tab+num)=*dummy;
    num++;
    }
    else{
        std::cout<<"The limit of 5 grades has been reached!\n";
        delete  dummy;
    }
}

void MyRegister::addGrade(MyGrade* dummy)const{
    std::cout<<"you cant add grade here its const\n";
    delete  dummy;
}

void MyRegister::showRegister(){
    std::cout<<"MyRegister "<<num<<"/"<<size<<" : "<<"\n";
    for(int i=0;i<num;i++){
        (tab+i)->print();
    }
}

void MyRegister::showRegister()const{
    std::cout<<"MyRegister "<<num<<"/"<<size<<" : "<<"\n";
    for(int i=0;i<num;i++){
        (tab+i)->print();
    }
}


MyRegister* MyRegister::backup()const{
    MyRegister* dummy = new MyRegister(num);
    dummy->num=num;
    for(int i=0;i<num;i++){
        dummy->tab[i]=tab[i];
    }
    return dummy;
}

void MyRegister::clearRegister(){
        delete [] tab;
        num=0;
        
}

MyRegister::~MyRegister(){
    std::cout<<"Delete register with " <<num<<"/"<<size<< "grades\n";
        delete [] tab;
        // for (int i=0;i<num;i++){
        //     delete (tab+i);
        // }
        
}
