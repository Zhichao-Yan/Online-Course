#include "Rational.hpp"
#include <iostream>

int main()
{
    Rational one_half (1,2);
    Rational one_third(1,3);
    Rational r1 = one_half * one_third;
    Rational r2 = one_third * 2;
    Rational r3 = 3 * one_half;
    Rational other = one_half;
    Rational same;
    same = one_third;
    std::cout << r1 << r2 << r3;
    std::cout << other << same;
    return 0;
}