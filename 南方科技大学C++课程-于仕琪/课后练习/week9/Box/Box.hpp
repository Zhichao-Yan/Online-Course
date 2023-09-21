#pragma once

class Box{
private:
    double length;
    double breadth;
    double height;
public:
    Box();
    Box(double,double,double);
    double getVolumn(void);
    void setLength(double len);
    void setBreadth(double bre);
    void setHeight(double hei);
};