#ifndef TEST_H_
#define TEST_H_

#include <string>
using std::string;

#define STARS "*************************************************************"

void divide();

class JustTesting{

private:
    string kotoba;
    int num;
public:
    // constructor
    JustTesting(const string & _kotoba = "Just Testing", int _num = 0);
    // destructor
    ~JustTesting();
    // show contents
    void Show() const;

};

#endif