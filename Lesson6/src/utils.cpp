#include "utils.h"
#include "namesp.h"
#include <iostream>

void first(){
    // by using declarations
    using debts::Debt;
    using debts::showDebt;

    Debt golf = {{"Edward", "Akasaka"}, 11000.0};
    showDebt(golf);
}


void other(){
    using std::cout;
    using std::endl;

    // by a using directive, not preferable
    using namespace debts;

    // namespace debts is using namespace pers
    Person sb = {"Joseph", "Biden"};
    showPerson(sb);
    cout << endl;

    // create an array of Debts
    // Debt dts[ARRAY_SIZE];
    std::array<Debt, ARRAY_SIZE> dts;

    // Last edited: 2022-06-05 21:10
    // input
    for(auto &each_dt : dts){
        getDebt(each_dt);
    }

    // output
    for(auto each_dt : dts){
        showDebt(each_dt);
    }
    // sum
    cout << "Total debt: $" << sumDebts<ARRAY_SIZE>(dts) << endl;

}


void another(){
    using pers::Person;
    Person hitori = {"Abe", "Shinzo"};
    pers::showPerson(hitori);
    std::cout << std::endl;
}