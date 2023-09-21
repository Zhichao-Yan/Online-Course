#include "Circle.hpp"
#include <iostream>

int main()
{
    Point p1(1,1),p2(4,5);
    Circle c1;
    Circle c2(p1,12);
    cout << "Before move" << endl;
    c1.show();
    c2.show();

    c1.move(p1);
    c2.move(p2);
    cout << "after move" << endl;
    c1.show();
    c2.show();
    return 0;
}