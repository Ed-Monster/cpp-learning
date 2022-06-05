#include <iostream>
#include "utils.h"

int main(){

    show_warming();// show global warming
    update(0.1);// add 0.1 to global warming
    show_warming();// show global warming

    local();// compare the local warming with the global warming

    return 0;
}