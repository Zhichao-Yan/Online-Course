#include <iostream>
//#define NDEBUG
#include <cassert>

int main(int argc, char ** argv)
{
    assert( argc == 2); // argc == 2 条件为false就会出错
    std::cout << "This is an assert example." << std::endl;
    return 0;
}