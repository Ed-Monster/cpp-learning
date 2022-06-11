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


String::String(const String & _string){
    len = _string.len;
    str = new char[len+1];
    strcpy(str, _string.str);
    NumStr++;
}


// destructor
String::~String(){
    delete [] str;
}
// assignment
String & String::operator=(const char *_str){
    delete [] str;

    len = strlen(_str);
    str = new char[len+1];
    strcpy(str, _str);

    return *this;
}


String & String::operator=(const String &_string){
    delete [] str;
    
    len = _string.len;
    str = new char[len+1];
    strcpy(str, _string.str);

    return *this;
}


// input and output
istream & operator>>(istream & is, String & _string){
    char temp[String::CINLIM];
    is.get(temp, String::CINLIM);
    
    if(is)
        _string = temp;
    while(is && is.get() != '\n')
        continue;
    
    return is;
}


ostream & operator<<(ostream & os, const String & _string){
    os << _string.str;
    return os;
}


// index
char & String::operator[](int index){
    return str[index];
}


const char & String::operator[](int index) const{
    return str[index];
}


// compare
bool operator<(const String & _str1, const String & _str2){
    return (strcmp(_str1.str, _str2.str) < 0);
}


bool operator>(const String & _str1, const String & _str2){
    return _str2 < _str1;
}


bool operator==(const String & _str1, const String & _str2){
    return (strcmp(_str1.str, _str2.str) == 0);
}