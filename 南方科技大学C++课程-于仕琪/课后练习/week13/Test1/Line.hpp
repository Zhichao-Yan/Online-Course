#pragma once
#include <iostream>
#include <cmath>
#include "Point.hpp"
using namespace std;
class Line
{
private:
    Point p1,p2;
    double distance = 0.0;
public:
    Line(Point xp1,Point xp2);
    Line(const Line &q);
    double getDistance() const { return distance; }
};

Line::Line(Point xp1,Point xp2):p1(xp1),p2(xp2)
{
    double x = p1.getX() - p2.getX();
    double y = p1.getY() - p2.getY();
    distance = sqrt(x * x + y * y);
}
Line::Line(const Line &q):p1(q.p1),p2(q.p2)
{
    cout << "calling the copy constructor of Line" << endl;
    distance = q.distance;
}