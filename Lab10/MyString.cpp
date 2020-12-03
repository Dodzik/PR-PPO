#include "MyString.h"

MyString::MyString(){
    delete []wyraz;
    std::cout<<"CTOR(def) = <>\n";
}

MyString::MyString(const char *x){
    char *dummy=(char*)malloc(strlen(x));
     strcpy(dummy,x);
     wyraz=dummy;
    std::cout<<"CTOR(cstr) = <"<<x<<">\n";
}


char* MyString::str()const{
    return (char*)this->wyraz;
}

MyString::~MyString(){
    
    std::cout<<"DESTRUCTOR = <"<<wyraz<<">\n";
    delete []wyraz;
}

char* MyString::subStr(int x,int y)const{
    char*dummy=(char*)malloc(sizeof(char)*(y-x+1));
    for(int i=x;i<y;i++){
        dummy[i-x]=wyraz[i];
    }
    dummy[y-x]='\0';
    return dummy;
}

