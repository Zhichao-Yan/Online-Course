
#### bugs in add.cpp
* `int Add(int number1, int number2);` delete the semi-colons
* `return n1 + n2;`'n1' was not declared in this scope
* `return n1 + n2;`'n2' was not declared in this scope

#### bugs in main.cpp
* `cout << “The result is ” << result << endl;` should use English-type double quotes
* `cout << "The result is " << result << endl;` should use std::cout and std::endl within the scope of std

#### bugs in ld process
* `"__Z3addii", referenced from:_main in main.o` symbol __Z3addii referenced by _main in main.o not found
* to fix it
    * `int Add(int n1, int n2);` in add.h 
    * `#include "add.h"` in main.cpp
    * `result = Add(num1, num2);` in main.cpp