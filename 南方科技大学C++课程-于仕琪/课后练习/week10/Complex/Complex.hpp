#pragma once
#include <iostream>

class Complex
{
private:
    double real = 0.0;
    double imag = 0.0;
public:
    Complex() = default;
    Complex(double re,double im):real(re),imag(im){}
    void SetReal(double val){ real = val; }
    void SetImag(double val){ imag = val; }
    double GetReal(){ return real; }
    double GetImag(){ return imag; }
    friend Complex operator+(const Complex &lhs,const Complex &rhs);
    friend Complex operator-(const Complex &lhs,const Complex &rhs);
    Complex &operator=(const Complex &c);
    friend Complex operator*(const Complex &lhs,const Complex &rhs);
    friend bool operator==(const Complex &lhs,const Complex &rhs);
    friend bool operator!=(const Complex &lhs,const Complex &rhs);
    friend std::ostream &operator<<(std::ostream &os,const Complex &c);
    friend std::istream &operator>>(std::istream &is,Complex &c);
};
Complex operator+(const Complex &lhs,const Complex &rhs);
Complex operator-(const Complex &lhs,const Complex &rhs);
Complex operator*(const Complex &lhs,const Complex &rhs);
bool operator==(const Complex &lhs,const Complex &rhs);
bool operator!=(const Complex &lhs,const Complex &rhs);
std::ostream &operator<<(std::ostream &os,const Complex &c);
std::istream &operator>>(std::istream &is,Complex &c);

