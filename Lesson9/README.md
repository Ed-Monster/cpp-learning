# Lesson9
- The usage of placement `new` in OOP
  ```C++
  char *buffer = new char[BUF]; // get a block of memory
  ...
  JustTesting * pc1 = new (buffer) JustTesting; // place object in buffer
  ```