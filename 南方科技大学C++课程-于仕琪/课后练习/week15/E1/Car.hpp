#ifndef CAR_H
#define CAR_H


#include <iostream>
using namespace std;

class Car
{
    friend class Driver;
private:
    enum
    {
        Off,
        On
    }; // Off- non automatically drive, On-automatically drive
    enum
    {
        Minvel,
        Maxvel = 200
    }; // range of velocity from 0 to 200 
    int mode; //mode of car, Off or On
    int velocity;

public:
    friend class Driver;
    Car(int m = On, int v = 50) : mode(m), velocity(v) {}
    bool velup(int v);     // increase velocity by v
    bool veldown(int v);   // decrease velocity by v
    bool ison() const;     // Check whether the mode is on
    int getvel() const;    // get the velocity
    void showinfo() const; // show the mode and velocity of car
};


#endif