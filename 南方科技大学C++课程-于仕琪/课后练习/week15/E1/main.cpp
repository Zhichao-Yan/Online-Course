#include <iostream>
#include "Car.hpp"
#include "Driver.hpp"
using namespace std;

int main()
{
    Car c;
    Driver d;
    c.showinfo();
    c.velup(120);
    d.setmode(c);
    c.showinfo();
    d.veldown(c,100);
    d.velup(c,150);
    return 0;
}