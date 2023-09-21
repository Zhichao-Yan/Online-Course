#include <iostream> 
using namespace std;
int main()
{
    char *pc, cc = 'A';
    int *pi, ii = 10;
    float *pf, ff = 23.4f;
    double *pd, dd = 123.78;
    pc = &cc;
    pi = &ii;
    pf = &ff;
    pd = &dd;
    // char 1bytes  pointer-8 bytes
    cout << "sizeof(cc) = " << sizeof(cc) << ", sizeof(pc) = " << sizeof(pc) << endl;
    // int 4bytes
    cout << "sizeof(ii) = " << sizeof(ii) << ", sizeof(pi) = " << sizeof(pi) << endl;
    // float 4bytes
    cout << "sizeof(ff) = " << sizeof(ff) << ", sizeof(pf) = " << sizeof(pf) << endl;
    // double 8bytes
    cout << "sizeof(dd) = " << sizeof(dd) << ", sizeof(pd) = " << sizeof(pd) << endl;
    // 指针变量的地址 指针变量保存的地址
    cout << "&pc = " << &pc << ", pc = " << static_cast<void *>(pc) << ", *pc = " << *pc << endl;
    cout << "&pi = " << &pi << ", pi = " << pi << ", *pi = " << *pi << endl;
    cout << "&pf = " << &pf << ", pf = " << pf << ", *pf = " << *pf << endl;
    cout << "&pd = " << &pd << ", pd = " << pd << ", *pd = " << *pd << endl;
    const char *msg = "C/C++ programming is fun.";//常量字符串
    const char *copy;
    copy = msg;
    // 常量字符串 常量字符串地址 保存这个地址的变量的地址
    cout << "msg = " << msg << ",its address is: " << (void *)msg << ", &msg = " << &msg << endl;
    cout << "copy= " << copy << ",its address is: " << (void *)copy << ", &copy= " << &copy << endl;
    return 0;
}