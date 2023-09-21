#include <iostream>
#include "mystring.hpp"

int main()
{
    mystring str1(10,"Hangzhou");
    std::cout << "str1:" << str1 << std::endl;

    mystring str2 = str1;
    std::cout << "str2:" << str2 <<std::endl;

    mystring str3;
    std::cout << "str3:" << str3 <<std::endl;

    str3 = str1;
    std::cout << "str3:" << str3 <<std::endl;

}