#pragma once
class Point{
private:
    double x,y;
public:
    Point(double newX, double newY)
    {
        x = newX;
        y = newY;
    }
    Point(const Point &p)
    {
        x = p.x;
        y = p.y;
    }
    double getX() const { return x; }
    double getY() const { return y; }
};