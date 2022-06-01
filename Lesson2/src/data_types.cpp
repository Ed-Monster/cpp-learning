#include <iostream>
#include <climits>

int main(void){
    using std::cout;
    using std::endl;

    // output as text
    // cout << "short: " << sizeof(short) * 8 << "bits, " << "max = " << SHRT_MAX << endl;
    // cout << "int: " << sizeof(int) * 8 << "bits, " << "max = " << INT_MAX << endl;
    // cout << "long: " << sizeof(long) * 8 << "bits, " << "max = " << LONG_MAX << endl;
    // cout << "long: " << sizeof(long long) * 8 << "bits, " << "max = " << LLONG_MAX << endl;

    // create a markdown sheet
    cout << "| short | " << 8 * sizeof(short) << " | " <<  SHRT_MAX << " |" << endl;
    cout << "| int | " << 8 * sizeof(int) << " | " <<  INT_MAX << " |" << endl;
    cout << "| long | " << 8 * sizeof(long) << " | " <<  LONG_MAX << " |" << endl;
    cout << "| long long | " << 8 * sizeof(long long) << " | " <<  LLONG_MAX << " |" << endl;
    return 0;
}