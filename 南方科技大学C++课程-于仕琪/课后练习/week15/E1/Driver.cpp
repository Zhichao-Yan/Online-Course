#include "Driver.hpp"

bool Driver::velup(Car &car, int v)
{
    car.velocity += v;
    cout << "Increase velocity by driver:";
    cout << "velocity is " << car.velocity << ". ";
    if(car.velocity > 200)
        cout << "It is out of Maxvel" << endl;
    return true;
}
bool Driver::veldown(Car &car, int v)
{
    car.velocity -= v;
    cout << "Decrease velocity by driver:";
    cout << "mode is ";
    if(car.mode == 1)
        cout << "On,";
    else
        cout << "Off,";
    cout << "velocity is " << car.velocity << endl;
    return true;
}
void Driver::setmode(Car &car)
{
    cout << "Set the mode of car by driver:" << endl;
    if(car.mode == 1)
    {
        car.mode = 0;
        cout << "The mode of car is:Off." << endl;
    }else{
        car.mode = 1;
        cout << "The mode of car is:On." << endl;
    }
}

bool Driver::ison(Car& car) const
{
    if(car.mode  == 1)
        return true;
    return false;
}