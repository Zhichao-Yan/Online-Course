#include <iostream> 
#include <memory>
using namespace std;
int main()
{
    double *p_reg = new double(5); // 被释放了两次
    double *q_reg = new double(5); // 被释放了两次
    shared_ptr<double> pd; // shared_ptr构造函数是explicit，只能直接初始化
    pd = shared_ptr<double>(p_reg);
    cout << "*pd = " << *pd << endl;

    // shared_ptr构造函数是explicit，只能直接初始化
    shared_ptr<double> pshared(q_reg);
    cout << "*pshred = " << *pshared << endl;

    // string str("Hello World!"); // 非动态分配的内存变量
    string *str = new string("Hello World!");
    shared_ptr<string> pstr(str); 
    cout << "*pstr = " << *pstr << endl;
    return 0;
}