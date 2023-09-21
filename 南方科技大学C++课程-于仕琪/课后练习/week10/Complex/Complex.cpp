#include "Complex.hpp"

Complex operator+(const Complex &lhs,const Complex &rhs)
{
    double a = lhs.real + rhs.real;
    double b = lhs.imag + rhs.imag;
    return Complex(a,b);
}
Complex operator-(const Complex &lhs,const Complex &rhs)
{
    double a = lhs.real - rhs.real;
    double b = lhs.imag - rhs.imag;
    return Complex(a,b);
}
Complex& Complex::operator=(const Complex &c)
{
    this->real = c.real;
    this->imag = c.imag;
    return *this;
}
Complex operator*(const Complex &lhs,const Complex &rhs)
{
    double a = lhs.real * rhs.real - lhs.imag * rhs.imag;
    double b = lhs.real * rhs.imag + lhs.imag * rhs.real;
    return Complex(a,b);
}
bool operator==(const Complex &lhs,const Complex &rhs)
{
    return lhs.real == rhs.real && rhs.imag == lhs.imag;
}
bool operator!=(const Complex &lhs,const Complex &rhs)
{
    return !(lhs == rhs);
}
std::ostream &operator<<(std::ostream &os,const Complex &c)
{   
    os << c.real << std::showpos << c.imag << 'i' << std::noshowpos;
    return os;
}
std::istream &operator>>(std::istream &is,Complex &c)
{
    is >> c.real >> c.imag;
    return is;
}