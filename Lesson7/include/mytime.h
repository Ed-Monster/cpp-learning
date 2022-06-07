#ifndef MYTIME_H_
#define MYTIME_H_

#define AN_HOUR 60
class Time{
    private:
        int hours;
        int minutes;
    public:
        // constructors
        Time();
        Time(int _hours, int _minutes = 0);

        void Show() const;
        int get_hours() const;
        int get_minutes() const;
        // operators overloaded
        Time operator+(const Time &t);
        Time operator-(const Time &t);
        Time operator*(int mult);
};

#endif