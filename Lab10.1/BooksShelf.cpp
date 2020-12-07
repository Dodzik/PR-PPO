#include "BooksShelf.h"

BooksShelf::BooksShelf(int co){
    size=co;
    tab=new Book[co];
    x=0;
}
void BooksShelf::add(Book dummy){
    
    // std::cout<<dummy.wyraz<<"\n";
    *(tab+x)=dummy;
    x++;
}
void BooksShelf::remove(int q){
    if(q>(size-1)){
        std::cout<<"!!! Nie mozna usunac ksiazki spoza polki !!! (element "<<q<<")\n";
    }
    else{
        //  tab[q]=0;
        Book *tab2=new Book[size-1];
        int p=0;
        for(int i=0;i<size;i++){
            if(i!=q){
            tab2[p]=tab[i];
            // std::cout<<tab2[p].wyraz<<"\n";
            p++;
           
            }
        }
        // delete []tab;
        tab=tab2;
        size--;
        x--;
    }
      
 }

void BooksShelf::print()const{
        for(int i =0;i<size;i++){
            std::cout<<tab[i].wyraz<<"\n";
        }
}

BooksShelf::~BooksShelf(){
    delete[] tab;
    tab=NULL;
}

BooksShelf::BooksShelf(const BooksShelf &other):tab(other.tab),x(other.x),size(other.size){}