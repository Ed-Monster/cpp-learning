#include "test.h"
#include <iostream>
#include <new>
using std::cout;
using std::endl;

const int BUF = 512;

int main(){
    char * buffer = new char[BUF];          // get a block of memory

    // pc1: buffer, pc2: heap
    JustTesting *pc1, *pc2;                 // pointers to JustTesting objects
    pc1 = new (buffer) JustTesting;         // place object in buffer
    pc2 = new JustTesting("Heap1", 6);      // place object in heap
    // show addresses
    cout << "Show addresses:" << endl;
    cout << "buffer: " << (void *) buffer << endl;
    cout << "heap1: " << pc2 << endl;
    // show memory contents
    cout << "Memory contents: " << endl;
    cout << pc1 << ": ";
    pc1 -> Show();
    cout << pc2 << ": ";
    pc2 -> Show();
    divide();

    // pc3: buffer, pc4: heap
    JustTesting *pc3, *pc4;
    pc3 = new (buffer + sizeof (JustTesting)) JustTesting("See me in buffer", 88);
    pc4 = new JustTesting("See me in heap2", 76);
    // show memory contents
    cout << "Memory contents:" << endl;
    cout << pc3 << ": ";
    pc3 -> Show();
    cout << pc4 << ": ";
    pc4 -> Show();
    divide();


    // free memory
    // free heap
    delete pc2;
    delete pc4;
    // explicitly destroy objects placed to buffer
    pc3 -> ~JustTesting();
    pc1 -> ~JustTesting();
    // free buffer
    delete [] buffer;

    cout << "Done!" << endl;

    return 0;
}