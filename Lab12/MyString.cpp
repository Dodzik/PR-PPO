#include "MyString.h"
#include <cstring>
#include <utility>

mystring::MyString::MyString(const MyString &dummy){
    size = dummy.size+1;
    string = new char[size];
    strcpy(string,dummy.string);
}
mystring::MyString::MyString(){
    string=nullptr;
    size=0;
}
mystring::MyString::~MyString(){
    delete []string;
}
mystring::MyString::MyString(const char * chain){
    size = strlen(chain)+1;
    string=new char[size];
    strcpy(string,chain);
}
void mystring::MyString::print(const char* chain)const{
    std::cout<<chain<<string<<"\n";
}

bool mystring::MyString::operator==(const MyString &dummy)const{
  if(strcmp(string,dummy.string))return false;
  else return true;
}
bool mystring::MyString::operator==(const char  *chain)const{
  if(strcmp(string,chain))return false;
  else return true;
}

mystring::MyString::operator char *()const{
    return string;
}

mystring::MyString mystring::MyString::operator+(const char *chain)const{
    MyString dummy;
    dummy.size=size+strlen(chain)+1;
    dummy.string=new char[size+strlen(chain)+1];
    strcpy(dummy.string, string);
    strcat(dummy.string, chain);
    return dummy;
}

mystring::MyString mystring::MyString::operator+(char chain)const{
    MyString dummy;
    dummy.size=size+1;
    dummy.string=new char[size+1];
    strcpy(dummy.string, string);
    dummy.string[size]=chain;
    return dummy;
}


mystring::MyString mystring::MyString::operator+( MyString &dummy)const{
    MyString dummy2;
    dummy2.size=size+dummy.size;
    dummy2.string=new char[size+dummy.size];
    strcpy(dummy2.string, string);
    strcat(dummy2.string, dummy.string);
    return dummy2;
}

mystring::MyString mystring::MyString::operator=(const MyString &dummy){
    return MyString(dummy);
}

void mystring::MyString::operator=(const char *chain){
  delete [] string;
  string=nullptr;
  string= new char[size+strlen(chain)+1];
  size=size+strlen(chain)+1;
  strcpy(string, chain);
}


mystring::MyString mystring::operator*(int a, const MyString &dummy){
    MyString dummy2;
    dummy2.size=a*dummy.size+1;
    dummy2.string=new char[a*dummy.size+1];
    strcpy(dummy2.string, dummy.string);
    for(int i=1;i<a;i++)strcat(dummy2.string,dummy.string);
    return dummy2;
}

mystring::MyString::MyString(MyString &&dummy){
    string=std::exchange(dummy.string,nullptr);
    size=std::exchange(dummy.size,0);
}

