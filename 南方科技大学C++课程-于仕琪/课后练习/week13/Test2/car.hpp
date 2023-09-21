#pragma once
#include <iostream>
using namespace std;

class Engine{
private:
    int cylinder;
public:
    Engine(int n):cylinder(n){ cout << "constructor:Engine(int)\n"; }
    int getCylinder() const { return cylinder; }
    void start()
    {
        cout << getCylinder() << " cylinder engine started " << endl;
    }
    ~Engine(){ cout << "destructor:~Engine()\n"; }
};

class Car{
private:
    Engine eng;
public:
    Car(int n = 4):eng(n){ cout << "constructor:Car(int)\n"; }
    void start()
    {
        cout << "Car with " << eng.getCylinder() << " cylinder engine started" << endl;
        eng.start();
    }
    ~Car(){ cout << " Destructor:~Car()\n"; }
};
