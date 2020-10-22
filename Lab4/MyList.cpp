#include "MyList.h"


void prepare(struct MyList * testList){
    // MyList * dummy_str=(struct MyList*)malloc(sizeof(struct  MyList*));
    // testList=dummy_str;
    testList->head=NULL;
}

void add(struct MyList* testList,char* buffer){
    //  std::cout<< buffer<<std::endl;
    if(testList->head==NULL){
        // std::cout<< "1"<<std::endl;
        Elem * dummy=(struct Elem*)malloc(sizeof(struct  Elem));
        // std::cout<< "2"<<std::endl;
        //    std::cout<< buffer<<std::endl;
          dummy->data=(char*)malloc(sizeof(char)*(strlen(buffer)));
        strcat(dummy->data,buffer);
        testList->head=dummy;
        // std::cout<< "3"<<std::endl;
    }

    else{
        // Elem * dummy_str=(struct Elem*)malloc(sizeof(struct  Elem*));
        // strcat(dummy_str->data,buffer);
        Elem * dummy_2=testList->head;
        while(dummy_2->next!=NULL){
            //  std::cout<<dummy_2->data <<std::endl;
            dummy_2=dummy_2->next;

        }
        // std::cout<<"test ";
        //  std::cout<<buffer<<std::endl;

        dummy_2->next=(struct Elem*)malloc(sizeof(struct  Elem));
        dummy_2->next->data=(char*)malloc(sizeof(char)*(strlen(buffer)));
        strcat(dummy_2->next->data,buffer);
        // std::cout<<dummy_2->next->data<<std::endl;
        dummy_2->next->next=NULL;
    }
}
bool empty(const struct MyList* lptr){
    if (lptr->head!=NULL){
        return false;
    }
    return true;
    
}
void dump(const struct MyList* cur){
    if(!empty(cur)){
    Elem* dummy=cur->head;
    do{
        std::cout<< dummy->data;
        std::cout<<" ";
        dummy=dummy->next;
    }while(dummy->next !=NULL);
    std::cout<< dummy->data;
    }
    
    std::cout<<""<<std::endl;
}
void clear(struct MyList * testList){
     if(!empty(testList)){
    Elem* dummy=testList->head;
    Elem* next=NULL;
    while(dummy->next!=NULL){
        next=dummy->next;
        free(dummy->data);
        free(dummy);
        dummy=next;
    }
    free(dummy->data);
    testList->head=NULL;
   // free(next->data);
    //free(next);
     }
}
