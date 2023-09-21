#include <iostream>
#include "Complex.hpp"
using namespace std;


int main()
{
    Complex a(3.0,-4.5);
    Complex b(-6.4,3.7);
    Complex c,d;
    a.display();
    b.display();
    c.add(a);
    c.display();
    d.subtract(b);
    d.display();
    return 0;
}