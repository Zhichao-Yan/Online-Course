#include <iostream>
#include "Complex.hpp"

void Complex::add(const Complex& data)
{
    real += data.real;
    imag += data.imag;
}

void Complex::subtract(const Complex& data)
{
    real -= data.real;
    imag -= data.imag;
}
void Complex::display() const
{
    std::cout << real << std::showpos << imag << "i" << std::noshowpos << std::endl;
}