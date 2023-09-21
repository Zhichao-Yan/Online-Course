#include "fib.hpp"
#include <iomanip>
#include <iostream>

void fib(int n)
{
    int a = 1,b = 0;
    int c = 0;
    for(int i = 1; i <= n; ++i)
    {
        c = a + b;
        a = b;
        b = c;
        std::cout << std::setw(10) << c ;
        if(i%10 == 0)
            std::cout << '\n';
    }
}