// to avoid multiple inclusions
#ifndef COORDIN_H_
#define COORDIN_H_

// structure declarations
struct rect{
    double x;
    double y;
};

struct polar{
    double distance;
    double angle;
};


// function prototypes
polar rect_to_polar(rect p_rect);
void show_polar(polar p_polar);

#endif