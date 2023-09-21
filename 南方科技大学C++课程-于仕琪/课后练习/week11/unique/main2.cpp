#include <iostream>
#include <memory>
using namespace std;

class A{
private:
    int x;
public:
    A(int a):x(a)
    {
        cout << "constructed with data:" << x << endl;
    }
    ~A()
    {
        cout << "destructed with data:" << x << endl;
    }
    int getA() const
    {
        return x;
    }
};

int main()
{
    unique_ptr<A> p1(new A(1));
    cout << "p1's data:" << p1->getA() << endl;

    A *ptr = new A(2);
    unique_ptr<A> p2(ptr);
    cout << "p2's data:" << p2->getA() << endl;

    unique_ptr<A> p3 = make_unique<A>(3);
    cout << "p3's data:" << p3->getA() << endl;
    return 0;
}