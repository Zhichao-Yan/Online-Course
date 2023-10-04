#include <iostream>
#include <thread>
using namespace std;

void Z()
{
    cout << "线程使用函数指针作为可调用参数" << endl;
}

class X {
public:
    void operator()()
    {
        cout << "线程使用函数对象作为可调用参数\n";
    }
};

int main()
{
    cout << "线程1、线程2、线程3独立运行" << endl;
    thread th1(Z);
    X x;
    thread th2(x);
    auto Y = [](){
        cout << "线程使用 lambda 表达式作为可调用参数\n";
    };
    thread th3(Y);
    th1.join();
    th2.join();
    th3.join();
    return 0;
}