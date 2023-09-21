#ifndef COMPLEX_H
#define COMPLEX_H

class Complex{
private:
    double real;
    double imag;
public:
    Complex(double re = 0.0,double im = 0.0):real(re),imag(im){}
    void add(const Complex& data);
    void subtract(const Complex& data);
    void display() const;
};


#endif