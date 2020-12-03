#include "MyString.h"

MyString::MyString(){
    char *dummy=(char*)malloc(sizeof(char));
    dummy[0]='\0';
    wyraz=dummy;
    std::cout<<"CTOR(cstr) = <>\n";
}

MyString::MyString(const char *x){
    char *dummy=(char*)malloc(strlen(x));
     strcpy(dummy,x);
     wyraz=dummy;
    std::cout<<"CTOR(cstr) = <"<<x<<">\n";
}

// MyString::MyString(char*x){
    

// }

char* MyString::str()const{
    return wyraz;
}

MyString::~MyString(){
    std::cout<<"DESTRUCTOR = <"<<wyraz<<">\n";
    wyraz=nullptr;
}

char* MyString::subStr(int x,int y)const{
    char*dummy=(char*)malloc(sizeof(char)*(y-x+1));
    for(int i=x;i<y;i++){
        dummy[i-x]=wyraz[i];
    }
    dummy[y-x]='\0';
    return dummy;
}

