#include "Point.hpp"

class Circle{
private:
    double radius;
    Point center;
public:
    Circle():center(0,0),radius(1.0){}
    Circle(Point &p,double r):center(p),radius(r){}
    Circle& move(Point &p)
    {
        center.x = p.x;
        center.y = p.y;
        return *this;
    }
    void show() const
    {
        center.show();
        cout << "radius:" << radius << endl;
    }
};