#include <iostream>
using namespace std;

class Point {
    friend class Circle;
private:
    double x;
    double y;
public:
    Point(double xx = 0, double yy = 0):x(xx),y(yy){}
    Point(const Point& p)
    {
        x = p.x;
        y = p.y;
    }
    double getX()
    {
        return x;
    }
    double getY()
    {
        return y;
    }
    void show() const
    {
        cout << x << ',' << y << endl;
    }
};
