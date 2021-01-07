#pragma once
#include <iostream>
namespace mystring {
    class MyString{
        friend MyString operator*(int a,const MyString &dummy);
        // friend void operator=(const char*chain2);
        public:
        MyString (const MyString &dummy);
        MyString(const char * chain);
        MyString ();
        ~MyString();

        void print(const char* chain)const;

        bool operator ==(const MyString &dummy)const;
        bool operator ==(const char *chain)const;

        operator char*()const;

        MyString operator+(const char * chain)const;
        MyString operator+(MyString &dummy)const;
        MyString operator+(char chain)const;

        MyString operator=(const MyString &dummy);

        void operator=(const char* chain);

       
        

        MyString ( MyString &&dummy);
        private:
        int size;
        char *string;
    };

    // void operator=(const char*chain2);
    MyString operator*(int a,const MyString &dummy);
}