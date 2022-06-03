#include <iostream>
#include <cmath>
#include "coordin.h"


// definitions of functions
polar rect_to_polar(rect p_rect){
    polar result;

    result.distance = 
        sqrt(p_rect.x * p_rect.x + p_rect.y * p_rect.y);
    result.angle = atan2(p_rect.y, p_rect.x);
    return result;
}

void show_polar(polar p_polar){
    using std::cout;
    using std::endl;

    const double Rad_to_deg = 57.29577951;
    cout << "distance = " << p_polar.distance;
    cout << ", angle = " << p_polar.angle * Rad_to_deg;
    cout << " degrees." << endl;
}