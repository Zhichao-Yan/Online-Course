#include <iostream>
#include "swap.hpp"
using namespace std;

int main()
{
    int a = 34,b = 43;
    cout << "交换前：a = " << a << " b = " << b << endl;
    swap(&a,&b);
    cout << "交换后：a = " << a << " b = " << b << endl;
    return 0;
}