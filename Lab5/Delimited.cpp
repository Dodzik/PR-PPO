#include "Delimited.h"
#include <iostream>

void chunk(const char* textOne,struct Delimited *del, char por ){
    del->str=textOne;  
    del->ch=por;
    del->indeksED= textOne;
    del->fragmentST=textOne;
}

int fragment_size(const struct Delimited *del){
    return del->indeksED - del->fragmentST;
}

void get_fragment(const struct Delimited *del,char *buffer ){
    const char * strst=del->fragmentST;
     char* buff=buffer;
     do{
         *buff=*strst;
         buff++; 
         strst++;
     }while(strst !=del->indeksED);
     *buff='\0';
 }
// void get_fragment(const Delimited* del, char* dest){
// 	const char* srcPtr = del->fragmentST;
// 	char* destPtr = dest;
// 	do {
// 		*destPtr = *srcPtr;
// 		srcPtr++; destPtr++;
// 	} while (srcPtr != del->indeksED);
// 	*destPtr = '\0';
// }
bool next(struct Delimited *del ){
    if(*del->indeksED =='\0'|| *del->indeksED+1 =='\0') {
    
     return false;
}
    if (fragment_size(del) != 0) 
        del->fragmentST = del->indeksED + 1;

     del->indeksED=del->fragmentST;
     while(*del->indeksED != del->ch && *del->indeksED != '\0'){
         del->indeksED =del->indeksED+1;
     }
    return true;
}

void rewind(struct Delimited *del){
    
    del->indeksED=del->str;
    del->fragmentST=del->str;
    
    
}

bool prev(struct Delimited *del ){
    if(del->fragmentST == del->str)
        return false;

        del->fragmentST=del->fragmentST-2;
        del->indeksED = del->fragmentST +1;
        while (*del->fragmentST!=del->ch){
            del->fragmentST =del->fragmentST -1;
            if(del->fragmentST== del->str){
                break;
            }
        }
        return true;
}
