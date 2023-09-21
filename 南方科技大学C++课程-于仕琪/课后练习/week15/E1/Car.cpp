#include "Car.hpp"

void Car::showinfo() const
{
    cout << "the information of car: mode is ";
    if(mode == On)
        cout << "On ";
    else
        cout << "Off";
    cout << ", velocity is " << velocity << endl; 
}
bool Car::ison() const
{
    if(mode == On)
        return true;
    return false;
}
int Car::getvel() const
{
    return velocity;
}
bool Car::velup(int v)
{
    velocity += v;
    cout << "Increase velocity by car,";
    cout << "mode is ";
    if(mode == 1)
        cout << "On,";
    else
        cout << "Off,";
    cout << "velocity is " << velocity << endl;
    return true;
}
bool Car::veldown(int v)
{
    velocity -= v;
    return true;
}