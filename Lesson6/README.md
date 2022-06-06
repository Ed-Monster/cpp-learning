# Lesson6
- using namespaces
- 2 namespaces (`pers` and `debts`) are created in the header file `namesp.h`
- to use a variable/class/structure/funtion:
  1. by a using declaration (preferable):
      ```C++
      using debts::Debt;
      Debt golf;
      ``` 
  2. by the scope-resolution operator
      ```C++
      debts::Debt golf;
      ```
  3. by a using directive
      ```C++
      using namespace debts;
      Debt golf;
      ```
- new features: 
  1. using the `array` container and iterator
        ```C++
        #include <array>
        // a substitution of
        // Debt dts[ARRAY_SIZE];
        std::array<Debt, ARRAY_SIZE> dts;
        ```
  2. range-based `for` loop (a new feature of C++11)
        ```C++
        // to merely read elements
        for(auto each_dt : dts){
                showDebt(each_dt);
            }
        // to alter elements
        for(auto &each_dt : dts){
                getDebt(each_dt);
            }
        ```