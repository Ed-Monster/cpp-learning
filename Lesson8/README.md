# Lesson8
- the implementation of user-defined `class String`
- features:
  1. initialization of a `String` object by:
     1. C-style string
      ```C++
      String(const char *);
      ```
     2. an existing `String` object
      ```C++
      String(const String &);
      ```
  2. assignment to a `String` object by:
     1. C-style string
      ```C++
      String & operator=(const char *);
      ```
     2. an existing `String` object
      ```C++
      String & operator=(const String &);
      ``` 
  3. access the elements of the string by index:
     1. to read and to modify
      ```C++
      char & operator[](int);
      ``` 
     2. only to read
      ```C++
      const char & operator[](int) const;
      ``` 
  4. use `cin` and `cout` to input and output `String` objects
     1. input
      ```C++
      friend istream & operator>>(istream &, String &);
      ```
     2. output
      ```C++
      friend ostream & operator<<(ostream &, const String &);
      ```
  5. to compare two `String` objects by `>`, `<`, and `==` operators
    ```C++
    friend bool operator<(const String &, const String &);
    friend bool operator>(const String &, const String &);
    friend bool operator==(const String &, const String &);
    ``` 