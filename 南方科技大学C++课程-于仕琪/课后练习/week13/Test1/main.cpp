#include <iostream>
#include "Point.hpp"
#include "Line.hpp"

using namespace std;

void fun1(Point p)
{
    cout << "fun1:" << p.getX() << ',' << p.getY() << endl;
    return;
}
Point fun2()
{
    Point a(1,2);
    return a;
}
int main()
{
    Point a(8,9);
    Point b = a;
    cout << "b: x = "<< b.getX() << ", y = " << b.getY() << endl;
    fun1(b);
    b = fun2();
    cout << "b: x = "<< b.getX() << ", y = " << b.getY() << endl;
    cout << "----------------------" << endl;
    Point m(3,4),n(5,6);
    Line line1(m,n);
    cout << "line1 distance: " << line1.getDistance() << endl;
    Line line2(line1);
    cout << "line2 distance: " << line2.getDistance() << endl;
    return 0;
}

