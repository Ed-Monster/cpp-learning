#ifndef NAMESP_H_
#define NAMESP_H_

#include <string>
#include <array>
// create the pers and debts namespace
namespace pers{
    struct Person{
        std::string fname;
        std::string lname;
    };

    void getPerson(Person &);
    void showPerson(const Person &);
};

namespace debts{
    using namespace pers;
    struct Debt{
        Person name;
        double amount;
    };

    void getDebt(Debt &);
    void showDebt(const Debt &);
    // function template
    template <size_t size>
    double sumDebts(const std::array<Debt, size> &ar){
        double sum = 0.0;

        for(auto ele : ar){
            sum += ele.amount;
        }

        return sum;
    }
};

#endif
// Last edited: 2022-06-05 21:10