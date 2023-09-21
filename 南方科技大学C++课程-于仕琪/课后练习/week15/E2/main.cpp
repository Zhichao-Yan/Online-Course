#include <iostream>
#include <typeinfo>
using namespace std;
class Base
{
protected:
    int bvalue;

public:
    Base(int i) : bvalue(i) {}
    virtual bool equal(const Base &b) const;
    friend bool operator==(const Base &, const Base &);
};

class Derived : public Base
{
private:
    int dvalue;

public:
    Derived(int a, int b) : Base(a), dvalue(b) {}
    virtual bool equal(const Base &b) const override;
};
bool Base::equal(const Base &b) const
{
    if(bvalue == b.bvalue)
    {
        cout << "Two Base type objects are equal." << endl;
        return true;
    }
    cout << "Two Base type objects are not equal because they have different values" << endl;  
    return false;
}
bool Derived::equal(const Base &b) const
{
    const Derived &d = dynamic_cast<const Derived &>(b);
    if(bvalue == d.bvalue && dvalue == d.dvalue)
    {
        cout << "Two Derived type objects are equal." << endl;
        return true;
    }
    cout << "Two Derived type objects are not equal because they have different values." << endl;
    return false;
}
bool operator==(const Base & A, const Base &B)
{
    if(typeid(A) == typeid(B))
    {
        return A.equal(B);
    }else
        throw "The two objects have different types, they can not be compared.";
    return true;
}
void process(const Base &A, const Base &B) 
{
    try{
        if(A == B);
    }catch(const char* str)
    {
        cout << str << endl;
    }
}
int main()
{
    Base b1(4);
    Base b2(2);
    Derived d1(1, 2);
    Derived d2(1, 2);
    process(b1, b2);
    process(d1, d2);
    process(b1, d1);
    return 0;
}