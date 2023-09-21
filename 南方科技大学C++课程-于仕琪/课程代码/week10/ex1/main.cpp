#include <iostream>
#include "time.hpp"
using namespace std;

int main()
{
    MyTime t1(1,40);
    MyTime t2(2,20);
    std::cout << (t1 + t2).getTime() << std::endl;
    t1 += t2;
    t1.operator+=(t2);
    std::cout << t1.getTime() << std::endl;
}