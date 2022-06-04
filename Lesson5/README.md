# Lesson5
- to use variables with static duration and external linkage
  - defined in `external.cpp`
    ```C++
    extern double warming = 0.5; 
    ```
  - re-declared in `utils.h`
    ```C++
    extern double warming;
    ```
- In C++, you can use scope-resolution operator `::` to explicitly use the external variable, which is arguably prefered to the traditional C-style **"define-and-re-declare"** pattern.
```C++
cout << ::warming;
```