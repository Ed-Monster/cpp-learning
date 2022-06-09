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

    cout << "planning time = " << planning;
    // planning.Show();

    cout << "waxing time = " << waxing;
    // waxing.Show();

    cout << "weeding time = " << weeding;
    // weeding.Show();

    sum = waxing + weeding;
    cout << "waxing + weeding = " << sum;
    // sum.Show();

    diff = weeding - waxing;
    cout << "weeding - waxing = " << diff;
    // diff.Show();

    product = waxing * mult;
    cout << "waxing * 2 = " << product;
    // product.Show();

    return 0;
}