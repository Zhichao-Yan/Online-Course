#include "Rational.hpp"

std::ostream& operator<<(std::ostream &os,const Rational &r)
{
    os << r.numerator << '/' << r.denominator << std::endl;
    return os;
}

Rational operator*(const Rational &lhs,const Rational &rhs)
{
    int num = lhs.GetNumerator() * rhs.GetNumerator();
    int den = lhs.GetDenominator() * rhs.GetDenominator();
    return Rational(num,den);
}