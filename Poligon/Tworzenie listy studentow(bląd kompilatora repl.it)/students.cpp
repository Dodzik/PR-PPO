/*ADRES PIERWSZEGO MIEJSCA W TABLICY IMION MA TAKI SAM ADRES JAK numberOfStudents*/ 

#include "students.h"

void AddStudent(int* numberOfStudents,char*** namesList,char*** surnamesList,int** semesterList, char* imiona,char* nazwisko, int numer_sem){
    char *dummy_imiona=(char*)malloc(strlen(imiona));
    char *dummy_surname=(char*)malloc(strlen(nazwisko));
    
    int dummy_sem_num=numer_sem;
    strcat(dummy_imiona,imiona);
    strcat(dummy_surname,nazwisko);
    //std::cout<<dummy_imiona<<std::endl;
    if(*namesList==NULL && *namesList==NULL && *surnamesList==NULL){
        std::cout<<"dummy"<<std::endl;
        *namesList=&dummy_imiona;
       *surnamesList=&dummy_surname;
        *semesterList=&dummy_sem_num;
        std::cout<<namesList<<std::endl;
    }
    else{
        //std::cout<<*numberOfStudents<<std::endl;
         *(namesList+1)=&dummy_imiona;
          std::cout<<(namesList+1)<<std::endl;
          std::cout<<(namesList+2)<<std::endl;
        // std::cout<<"JEV1"<<std::endl;
        *(surnamesList+1)=&dummy_surname;
        //  std::cout<<"JEV2"<<std::endl;
         *(semesterList+1)=&dummy_sem_num;
        //  std::cout<<"JEV3"<<std::endl;
    }
    std::cout<<"JEV4"<<std::endl;

    *numberOfStudents=(*numberOfStudents)+1;

    std::cout<<"adr num"<<numberOfStudents<<std::endl;

     std::cout<<"JEV6"<<std::endl;
    std::cout<<"JEV5"<<std::endl;
    // std::cout<<*numberOfStudents<<std::endl;
}

// void PrintListContent (int numberOfStudents,char** surnamesList){
//     for(int i=0;i<numberOfStudents;i++){
//         std::cout<<*(surnamesList+i)<<std::endl;
//     }
// }
