#include "Complex.hpp"
#include <iostream>

int main()
{
    Complex A(3.0,4.0);
    Complex B;
    std::cout << "请输入复数的实部和虚部：";
    std::cin >> B;
    Complex C;
    C = B;
    if(A == B)
        std::cout << "A和B相等" << std::endl;
    if(A !=B )
        std::cout << "A和B不相等" << std::endl;
    std::cout << A << std::endl;
    std::cout << B << std::endl;
    std::cout << C << std::endl;
    std::cout << A + B << std::endl;
    std::cout << A - B << std::endl;
    std::cout << A * B << std::endl;
    return 0;
}