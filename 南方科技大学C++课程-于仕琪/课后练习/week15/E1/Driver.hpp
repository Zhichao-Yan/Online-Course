#ifndef DRIVER_H
#define DRIVER_H

#include "Car.hpp"

class Driver
{
public:
    bool velup(Car &car, int v);   // increase velocity by v
    bool veldown(Car &car, int v); // decrease velocity by v
    void setmode(Car &car);        // If the mode is On, set it to Off,otherwise set it to Off 
    bool ison(Car& car) const; //Check whether the mode is on
};

#endif