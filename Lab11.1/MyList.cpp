#include "MyList.h"



MyNode::MyNode():value(0),next(nullptr){
    
}

MyNode::MyNode(int x):value(x),next(nullptr){

}

int MyNode::val(){
    return value;
}
MyNode::~MyNode(){
    next=nullptr;
}


///////////////////////////////////////////////////////////////////////////////




MyList::MyList():_size(0),head(nullptr),tail(nullptr){
    std::cout<<"\nKONST: Domyslny\n";
}

MyList::MyList(std::initializer_list<int> l){
_size=l.size();
 head=nullptr;
tail=nullptr;

for(auto i= l.begin(); i<l.end();i++) {
    add(*i);
}
        
    
}

void MyList::add(int x){
    // MyNode* dummy =new MyNode(x);
    // std::cout<<x<<"\n";
    if(!head){
            MyNode* dummy =new MyNode(x);
            head=dummy;
            tail=dummy;
    }
    else{
        // std::cout<<"krowa\n";
        tail->next=new MyNode(x);
        // std::cout<<"krowa\n";
        tail=tail->next;
    }
    _size++;
}
MyList::MyList (int x): _size(0){
    std::cout<<"\nKONST: Jednoargumentowy\n";
    int q=0;

     head=nullptr;
    tail=nullptr;
 
    for(int i=0;i<x;i++){
       
    
        add(i);
    }

}


void MyList::print()const {
    std::cout<<"[ ";
    MyNode *dummy=head;
    while(dummy){
        
        std::cout<<dummy->value<<" ";
        dummy=dummy->next;
    }
    std::cout<<"]\n";
}
int MyList::size()const {
    return _size;
}
bool MyList::empty()const {
    return !head;
}

MyList::~MyList(){ 
    zwolnij(head);
    std::cout<<"DESTRUKTOR (rozmiar = "<<_size<<")\n";
    _size=0;
    head=nullptr;
    tail=nullptr;
}
MyList::MyList(const MyList &other):_size(other._size){
  std::cout<<"\n--- kopiowanie: \n";
    
    MyNode* dummy=other.head;
    
    while(dummy){
        MyNode* cur=new MyNode(dummy->value);
        if(!head){
            head=cur;
            tail=cur;
        }    
        else{
            tail->next=cur;
            tail=tail->next;
        }
       
        dummy=dummy->next;
    }
    
  
}

MyList::MyList( MyList &&other):head(other.head),tail(other.tail),_size(other._size){
  std::cout<<"\n--- przenoszenie: \n";
    other.head=nullptr;
    other.tail=nullptr;
    other._size=0;
  
}


void MyList::clear(){
zwolnij(head);
_size=0;
head=nullptr;
tail=nullptr;


}

MyList::MyList  (int (*fun)(MyNode*), int ilosc){
       head=nullptr;
    tail=nullptr;
    for(int i=0;i<ilosc;i++){
        add(fun(tail));
    }
}

void zwolnij(MyNode* dummy){
    MyNode* wsk=dummy;
    if(wsk){
        zwolnij (wsk->next);
        delete wsk;
    }
}
