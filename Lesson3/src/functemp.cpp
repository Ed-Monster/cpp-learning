#include <iostream>
#include <string>

#define STARS "*********************************************************"

using std::string;

struct job{
    string name;
    double salary;
};


// print a line of stars
void Divide(){
    using std::cout;
    using std::endl;

    cout << STARS << endl;
}


// printNum: print 2 nums
template <class T>
void printNum(T, T, string str_a = "a", string str_b = "b");

// printNum: the overloaded version, printint one num
template <class T>
void printNum(T, string str_num = "num");

// printNum: the explicit specialization for the job type
template <> void printNum<job>(job, string);


// Swap: the prototype
template <class T>
void Swap(T &, T &);

// Swap: thr explicit specialization for the job type
template <> void Swap<job>(job &, job &);


template <class T>
T Add(T, T);


int main(void){
    using std::cout;
    using std::endl;


    /* swap int */
    /************************************************************/
    int n_num_a = 9;
    int n_num_b = 23;

    Divide();
    // using implicit instantiation
    printNum(n_num_a, n_num_b);
    Divide();
    // using implicit instantiation
    Swap(n_num_a, n_num_b);
    // using implicit instantiation
    printNum(n_num_a, n_num_b);
    Divide();
    cout << endl;
    /************************************************************/


    /* swap struct job */
    /************************************************************/
    job job_a = {
        "Edward",
        11000.7
    };

    job job_b = {
        "Tong",
        20027.9
    };

    Divide();
    // using explicit specializtion
    printNum(job_a, "job_a");
    // using explicit specializtion
    printNum(job_b, "job_b");
    Divide();
    // using explicit specializtion
    Swap(job_a, job_b);
    // using explicit specializtion
    printNum(job_a, "job_a");
    // using explicit specializtion
    printNum(job_b, "job_b");
    Divide();
    cout << endl;
    /************************************************************/


    /* add an int to a double */
    /************************************************************/
    double f_add_a = 9.65;
    int n_add_b = 8;
    // using c++11 keyword: auto
    // and explicit instantiation
    auto sum_a_b = Add<double>(f_add_a, n_add_b);

    Divide();
    // using explicit instantiation
    printNum<double>(f_add_a, n_add_b);
    // using implicit instantiation
    // and the overloaded function
    printNum(sum_a_b, "a + b");
    Divide();
    /************************************************************/
    

    return 0;
}


template <class T>
void Swap(T &a, T &b){
    T temp;
    temp = a;
    a = b;
    b = temp;
}


template <class T>
T Add(T a, T b){
    return a + b;
}


template <class T>
void printNum(T a, T b, string str_a, string str_b){
    using std::cout;
    using std::endl;

    cout << str_a << " = " << a << ", " << str_b << " = " << b << endl;
}


template <class T>
void printNum(T num, string str_num){
    using std::cout;
    using std::endl;

    cout << str_num << " = " << num << endl;
}


template <> void Swap<job>(job &a, job &b){
    job temp;
    temp.name = a.name;
    temp.salary = a.salary;

    a.name = b.name;
    a.salary = b.salary;

    b.name = temp.name;
    b.salary = temp.salary;
}


template <> void printNum<job>(job job_a, string str_job){
    using std::cout;
    using std::endl;

    cout << str_job << ": " << endl;
    cout << "{" << endl;
    cout << "\t" << "name = " << job_a.name << "," << endl;
    cout << "\t" << "salary = " << job_a.salary << endl;
    cout << "\t" << "}" << endl;
}