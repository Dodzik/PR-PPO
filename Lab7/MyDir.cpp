#include "MyDir.h"

void initDir(MyDir &root, std::string str){

    root.parent=NULL;
    root.child1=NULL;
    root.child2=NULL;
    root.child3=NULL;
    root.name=str;
}

void printDir(MyDir dummy,int x){
    // if(dummy.name=="tajemnica"){
    //     return ;
    // }
    for(int i=0;i<x;i++){
        std::cout<<"-";
    }
    std::cout<<">";
    std::cout<<dummy.name<<std::endl;
    if(dummy.child1!=NULL){
        
        printDir(*(dummy.child1),x+2);
    }
    if(dummy.child2!=NULL){
        printDir(*(dummy.child2),x+2);
    }
    if(dummy.child3!=NULL){
        printDir(*(dummy.child3),x+2);
    }
}
MyDir* addDir(MyDir &root, std::string str){
    if(str.length()>20){
        std::cout<<"Too long name:"<< str<<std::endl;
        return NULL;
    }
    MyDir *dummy=new MyDir;
    dummy->parent=&root;
    dummy->child1=NULL;
    dummy->child2=NULL;
    dummy->child3=NULL;
    dummy->name= str;
    if(root.child1==NULL){
        root.child1=dummy;
    }
    else if(root.child2==NULL){
        root.child2=dummy;
    }
    else if(root.child3==NULL){
        root.child3=dummy;
    }
    return dummy;
}
void addDir(MyDir &root, MyDir &dummy){

    if(root.child1==NULL){
        root.child1=&dummy;
    }
    else if(root.child2==NULL){
        root.child2=&dummy;
    }
    else if(root.child3==NULL){
        root.child3=&dummy;
    }
    
}
void  clearDir(MyDir &root){
    root.child1=NULL;
    root.child2=NULL;
    root.child3=NULL;
 }
