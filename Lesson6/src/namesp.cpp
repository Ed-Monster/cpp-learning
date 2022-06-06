#include "namesp.h"
#include <iostream>

namespace pers{
    using std::cout;
    using std::cin;

    void getPerson(Person &ps){
        cout << "Enter the first name: ";
        cin >> ps.fname;
        cout << "Enter the last name: ";
        cin >> ps.lname;
    }

    void showPerson(const Person &c_ps){
        cout << c_ps.fname << " " << c_ps.lname;
    }
}


namespace debts{
    void getDebt(Debt &dt){
        getPerson(dt.name);
        std::cout << "Enter debt: ";
        std::cin >> dt.amount;
    }

    void showDebt(const Debt &c_dt){
        showPerson(c_dt.name);
        std::cout << ": $" << c_dt.amount << std::endl;
    }


}
// Last edited: 2022-06-05 21:10