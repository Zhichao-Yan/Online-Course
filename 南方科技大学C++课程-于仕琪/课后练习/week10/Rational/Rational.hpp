#pragma once

#include <iostream>

class Rational
{
private:
    int numerator;
    int denominator;
public:
    Rational(int num = 1,int den = 1)
    {
        this->numerator = num;
        this->denominator = den;
    }
    //Rational(int num ):numerator(num),denominator(1){}
    Rational(const Rational &r)
    {
        std::cout << "calling copy constructor" << std::endl;
        this->numerator = r.numerator;
        this->denominator = r.denominator;
    }
    
    Rational &operator=(const Rational &rhs)
    {
        std::cout << "calling assignment operator" << std::endl;
        this->numerator = rhs.numerator;
        this->denominator = rhs.denominator;
        return *this;
    }
    int GetNumerator() const { return numerator; }
    int GetDenominator() const { return denominator; }
    friend std::ostream& operator<<(std::ostream &os,const Rational &r);
    void show() const;
};

std::ostream& operator<<(std::ostream &os,const Rational &r);
Rational operator*(const Rational &lhs,const Rational &rhs);