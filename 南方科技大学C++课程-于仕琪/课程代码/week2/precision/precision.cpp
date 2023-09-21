#include <iostream>
using namespace std;

int main()
{
    float f1 = 23400000000;
    float f2 = f1 + 10;//+10 f2并没有增加，浮点数采样精度不够 

    cout.setf(ios_base::fixed, ios_base::floatfield); // fixed-point
    cout << "f1 = " << f1 << endl;
    cout << "f2 = " << f2 << endl;
    cout << "f1 - f2 = " << f1 - f2 << endl;
    cout << "(f1 - f2 == 0) = " << (f1 - f2 == 0) << endl;
    return 0;
} 