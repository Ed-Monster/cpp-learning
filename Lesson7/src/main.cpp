#include <iostream>
#include "mytime.h"

int main(){

    using std::cout;
    using std::endl;

    // oprands
    Time planning;
    Time weeding(4, 50);
    Time waxing(2, 7);
    int mult = 2;

    // results
    Time sum;
    Time diff;
    Time product;

    cout << "planning time = ";
    planning.Show();

    cout << "waxing time = ";
    waxing.Show();

    cout << "weeding time = ";
    weeding.Show();

    sum = waxing + weeding;
    cout << "waxing + weeding = ";
    sum.Show();

    diff = weeding - waxing;
    cout << "weeding - waxing = ";
    diff.Show();

    product = waxing * mult;
    cout << "waxing * 2 = ";
    product.Show();

    return 0;
}