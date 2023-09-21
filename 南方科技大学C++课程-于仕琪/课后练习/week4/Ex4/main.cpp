#include <iostream>
#include "fib.hpp"
int main()
{
    int n;
    std::cout << "Please enter a positive integer:";
    while(std::cin >> n)
    {
        if(n <= 0)
            std::cout << "Please enter a positive integer:";
        else
            break;
    }
    fib(n);
    return 0;
}