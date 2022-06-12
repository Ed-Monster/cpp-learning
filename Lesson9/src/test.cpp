#include "test.h"
#include <iostream>

using std::cout;
using std::endl;


void divide(){
    cout << STARS << endl;
}


JustTesting::JustTesting(const string & _kotoba, int _num){
    kotoba = _kotoba;
    num = _num;

    cout << kotoba << " constructed." << endl;
}


JustTesting::~JustTesting(){
    cout << kotoba << ", " << num << " destructed." << endl;
}


void JustTesting::Show() const{
    cout << "You are visiting " << kotoba << ", " << num << "." << endl;
}