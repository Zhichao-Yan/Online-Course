#include <iostream>
#include "stuinfo.hpp"
using namespace std;

int main()
{
    cout << "请输入学生人数：";
    int n;
    cin >> n;
    stuinfo *stu = new stuinfo[n];
    inputstu(stu,n);
    showstu(stu,n);
    delete[]stu;
}