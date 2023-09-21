#include <iostream>
#include <memory>
using namespace std;

class B;

class A{
public:
    shared_ptr<B> pb;
    A(){ cout << "Construct A" << endl; }
    ~A(){ cout << "Destruct A" << endl; }
};

class B{
public:
    shared_ptr<A> pa;
    B(){ cout << "Construct B" << endl; }
    ~B(){ cout << "Destruct B" << endl; }
};

int main()
{
    shared_ptr<A> spa= make_shared<A>();
    shared_ptr<B> spb= make_shared<B>();
    spa->pb = spb; // spb计数器=2
    spb->pa = spa; // spa计数器=2
    return 0;
}
