#include <iostream>
#include "hard.hpp"
using namespace std;

int main()
{
    PtrHardcopy s1("helloworld");
    PtrHardcopy s2 = s1;
    PtrHardcopy s3;
    s3 = s1;
    cout << "s1:" << s1 << endl;
    cout << "s2:" << s2 << endl;
    cout << "s3:" << s3 << endl;
}