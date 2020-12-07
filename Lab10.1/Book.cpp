#include "Book.h"

Book::Book(const char *x){
    //  char *dummy=(char*)malloc(strlen(x)+1);
    // char *dummy;
    //   strcpy(dummy,x);
    wyraz=x;
    //   wyraz=dummy;
     std::cout.width(38);
     std::cout<<x<<"\n";
}
Book::Book():wyraz(""){
  
}

Book::~Book(){

}