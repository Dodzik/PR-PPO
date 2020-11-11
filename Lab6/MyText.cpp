#include "MyText.h"


MyText*  initMyText(const char * kra){
    MyText* dummy=new MyText;
    dummy->name=kra;
    dummy->str=(char*)malloc(sizeof(char*));
    dummy->str=NULL;
    return dummy;
}

bool empty(MyText * dummy){
    if(dummy->str ==NULL){
        return true;
    }
    else{
    return false;
    }
}

char my_uptolow_lowtoup(char a){
    int q=a;
    if(a==' '){
        return a;
    }
    if (q<=122 && q>=97){
        q=q-32;
        a=q;
    }
    else{
        q=q+32;
        a=q;
    }
    return a;
}

const char * getCString(MyText * dummy){
    if(empty(dummy))return "";
    return dummy->str;
}

MyText * append(MyText * dummy,const char * string){
    dummy->str=(char*)realloc(dummy->str, sizeof(dummy->str)+sizeof(string));
    strcat(dummy->str,string);
    return dummy;
}
void setChar(MyText * dummy, int a,const char por){
   
    char bol=*(dummy->str+a);
    for(int i=a;i<strlen(dummy->str);i++){
        if(*(dummy->str+i)==bol){
            //strcpy(*(kra+i), por);
            //*(kra+i)=por;
        }
    }
}

void nicePrint(MyText* dummy){
    std::cout<<dummy->name<<" = "<<dummy->str<<std::endl;
}

int size(MyText * dummy){
    return strlen(dummy->str);
}
void free(MyText* dummy){
    delete(dummy->str);
    free(dummy);
}
MyText * initMyText(const char* a, MyText*dummy){
    MyText *dummy_clone=new MyText;
    dummy_clone->name=a;
    dummy_clone->str=dummy->str;
    return dummy_clone;
}
void modify(MyText* dummy, char(*f)(char)){
    for(int i=0;i<strlen(dummy->str);i++){
        *(dummy->str+i)=((*f)(*(dummy->str+i)));
        }

}
void modify(MyText*dummy,int f(int)){
    for(int i=0;i<strlen(dummy->str);i++){
        *(dummy->str+i)=f(*(dummy->str+i));
    }
}

void clear(MyText*dummy){
    delete(dummy->str);
}
void erase(MyText* dummy, int a, int b){
    char *q[a];
    char *p[strlen(dummy->str)-b];
    for(int i=0;i<a;i++){
        *(q+i)=(dummy->str+i);
    }
}
