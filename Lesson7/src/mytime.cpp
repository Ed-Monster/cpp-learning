#include "mytime.h"
#include <iostream>

void Time::Show() const{
    std::cout << hours << " hours, " << minutes << " minutes.\n";
}


int Time::get_hours() const{
    return hours;
}


int Time::get_minutes() const{
    return minutes;
}


// the default constructor
Time::Time(){
    hours = 0;
    minutes = 0;
}


// initialize a Time object by hours and minutes
Time::Time(int _hours, int _minutes){
    hours = _hours;
    minutes = _minutes;
}


// operator +
Time Time::operator+(const Time &t){
    Time sum;
    int tot_min_op1, tot_min_op2, tot_min;
    int sum_h, sum_m;
    // the total minutes of operand 1
    tot_min_op1 = AN_HOUR * hours + minutes;
    // the total minutes of operand 2
    tot_min_op2 = AN_HOUR * t.get_hours() + t.get_minutes();
    tot_min = tot_min_op1 + tot_min_op2;

    // minutes to hours and minutes
    sum_h = tot_min / AN_HOUR;
    sum_m = tot_min % AN_HOUR;

    sum = Time(sum_h, sum_m);
    return sum;
}


// operator -
Time Time::operator-(const Time &t){
    Time diff;
    int tot_min_op1, tot_min_op2, tot_min;
    int diff_h, diff_m;
    // the total minutes of operand 1
    tot_min_op1 = AN_HOUR * hours + minutes;
    // the total minutes of operand 2
    tot_min_op2 = AN_HOUR * t.get_hours() + t.get_minutes();
    tot_min = tot_min_op1 - tot_min_op2;

    // minutes to hours and minutes
    diff_h = tot_min / AN_HOUR;
    diff_m = tot_min % AN_HOUR;

    diff = Time(diff_h, diff_m);
    return diff;
}


// operator *
Time Time::operator*(int mult){
    Time product;
    int tot_min_op1, tot_min;
    int product_h, product_m;

    tot_min_op1 = AN_HOUR * hours + minutes;
    tot_min = mult * tot_min_op1;
    
    product_h = tot_min / AN_HOUR;
    product_m = tot_min % AN_HOUR;

    product = Time(product_h, product_m);
    return product;
}


