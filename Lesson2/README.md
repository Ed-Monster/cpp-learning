# Lesson2: Data Types
- the limits and sizes of different data types (Linux)

    | Type | Size(bits) | Max |
    | :-: | :-: | :- |
    | short | 16 | 32767 |
    | int | 32 | 2147483647 |
    | long | 64 | 9223372036854775807 |
    | long long | 64 | 9223372036854775807 |

- underlying types: \
    `wchar_t`, `char16_t`, `char32_t`
- to force output to stay in fixed-point notation
    ```C++
    cout.setf(ios_base::fixed, ios_base::floatfield);
    ``` 