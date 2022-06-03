#include <iostream>
#include "coordin.h"

int main(){
    using std::cout;
    using std::cin;
    using std::endl;

    polar pos_polar;
    rect pos_rect;

    cout << "Enter x and y values: ";
    while(cin >> pos_rect.x >> pos_rect.y){
        pos_polar = rect_to_polar(pos_rect);
        show_polar(pos_polar);
        cout << "Enter next two values (q to quit): ";
    }
    cout << "Bye!" << endl;
    return 0;
}