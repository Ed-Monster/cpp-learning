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
- another new feature: using the `array` container and iterator