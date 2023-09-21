#include <iostream>
#include <memory>
#include "matrix.hpp"
using namespace std;

int main()
{
    Matrix a(3,4);
    Matrix b(5,4);
    try{
        Matrix c = a + b;
    }catch(runtime_error err)
    {
        cout << err.what() << endl;
    }
    Matrix d = a;
    d = b;
}