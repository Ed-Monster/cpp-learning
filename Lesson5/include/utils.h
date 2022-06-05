#ifndef UTILS_H_
#define UTILS_H_

// to re-declare the external variable first declared in "external.cpp",
// but give no definition. 
extern double warming;

// function prototypes
void show_warming(); // to print the value of global warming at the moment 
void update(double add); // to update "warming"
void local(); // to show how global variables are hidden by their local counterparts

#endif