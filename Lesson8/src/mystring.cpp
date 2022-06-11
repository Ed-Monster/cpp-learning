#include "mystring.h"
#include <cstring>

// <iostream>
using std::cin;
using std::cout;
// <cstring>
using std::strlen;
using std::strcpy;
using std::strcmp;

// initialize static class member
int String::NumStr = 0;


// the static method
int String::getNumStr(){
    return NumStr;
}


// constructors
String::String(){
    len = 0;
    str = new char[1];
    str[0] = '\0'; // empty string
    NumStr++;
}


String::String(const char * _str){
    len = strlen(_str);
    str = new char[len+1];
    strcpy(str, _str);
    NumStr++;
}


String::String(const String * _string){
    len = _string.len;
    str = ner char[len+1];
    strcpy(str, _string.str);
    NumStr++;
}


// assignment