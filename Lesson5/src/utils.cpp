#include <iostream>
#include "utils.h" // "wariming" re-declared here

void show_warming(){
    using std::cout;
    using std::endl;

    extern double warming;// optinal
    cout << "Global warming is now " << warming << " degrees." << endl;
}

void update(double add){
    using std::cout;
    using std::endl;
    // using the external variable initialized in "external.cpp" 
    extern double warming; // optional
    warming += add;
    cout << "Updating warming to " << warming << " degrees." << endl;
}

void local(){
    using std::cout;
    using std::endl; 
    // automatic duration, local scope, no linkage
    double warming = 0.3;
    // using global warming by scope-resolution operator
    cout << "While global warming is " << ::warming << " degrees, ";
    // global warming hidden by local warming
    cout << "local warming is still " << warming << " degrees." << endl; 
}