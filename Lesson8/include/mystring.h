#ifndef MYSTRING_H_
#define MYSTRING_H_

#include <iostream>
using std::istream;
using std::ostream;

class String{
    private:
        int len; // the length of the string
        char *str; // dynamic allocation of memory
        static int NumStr; // the number of String objects
        static const int CINLIM = 80; // the largest size allowed
    public:
        // constructors
        String(); // the default constructor
        String(const char *); // by C-style string
        String(const String &); // copy construtor
        // destructor
        ~String();
        // assignment
        String & operator=(const char *); // by C-style string
        String & operator=(const String &); // by String object
        // index
        char & operator[](int); // to read and to modify
        const char & operator[](int) const; // only to read
        // input and output
        friend istream & operator>>(istream &, String &); // use cin to input a String object
        friend ostream & operator<<(ostream &, const String &); // use cout to ouput a String object
        // compare
        friend bool operator<(const String &, const String &);
        friend bool operator>(const String &, const String &);
        friend bool operator==(const String &, const String &);
        // other methods
        inline int length() const {return len;}; // get string length
        // the static method
        static int getNumStr(); // get the number of String objects

};

#endif