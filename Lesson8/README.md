# Lesson8
- the implementation of user-defined `class String`
- features:
  - initialization of a `String` object by:
    - C-style string
      ```C++
      String(const char *);
      ```
    - an existing `String` object
      ```C++
      String(const String &);
      ```
  - assignment to a `String` object by:
    - C-style string
      ```C++
      String & operator=(const char *);
      ```
    - an existing `String` object
      ```C++
      String & operator=(const String &);
      ``` 
  - access the elements of the string by index:
    - to read and to modify
      ```C++
      char & operator[](int);
      ``` 
    - only to read
      ```C++
      const char & operator[](int) const;
      ``` 
  - use `cin` and `cout` to input and output `String` objects
    - input
      ```C++
      friend istream & operator>>(istream &, String &);
      ```
    - output
      ```C++
      friend ostream & operator<<(ostream &, const String &);
      ```
  - to compare two `String` objects by `>`, `<`, and `==` operators
    ```C++
    friend bool operator<(const String &, const String &);
    friend bool operator>(const String &, const String &);
    friend bool operator==(const String &, const String &);
    ``` 