#include <iostream>
#include <typeinfo>
#include <vector>
#include "soft.hpp"
using namespace std;

int main()
{
    PtrSoftcopy s1("good moring!Yan");
    cout << "s1:" << s1 << endl;
    PtrSoftcopy s2(s1);
    cout << "s2:" << s2 << endl;
    PtrSoftcopy s3;
    cout << "s3:" << s3 << endl;
    s3 = s1;
    cout << "s3:" << s3 << endl;
    return 0;
}