class Base
{
private:
    int x;

protected:
    int y;

public:
    int z;
    void funBase(Base &b) // 在x/y/z在类的作用域内都是可以访问的
    {
        ++x;
        ++y;
        ++z;
        ++b.x;
        ++b.y;
        ++b.z;
    }
    void funBase1(Base &b);
};
void Base::funBase1(Base &b) // 在x/y/z在类的作用域内都是可以访问的
{
        ++x;
        ++y;
        ++z;
        ++b.x;
        ++b.y;
        ++b.z;    
}

class Derived : public Base
{
public:
    void funDerived(Base &b, Derived &d)
    {
        ++x;//private
        ++y;//访问自己类的成员
        ++z;//访问自己类的成员
        ++b.x;// private不可被派生类访问
        ++b.y;// protected成员在派生类中不可以通过基类对象访问
        ++b.z;// public成员
        ++d.x;// private不可被派生类访问
        ++d.y;// protected成员在派生类中可以通过派生类对象访问
        ++d.z;// public成员
    }
    void funDerived1(Base &b, Derived &d);
};

void Derived::funDerived1(Base &b, Derived &d)
{
    ++x;//继承的private
    ++y;//访问自己类的成员
    ++z;//访问自己类的成员
    ++b.x;// private不可被派生类访问
    ++b.y;// protected成员在派生类中不可以通过基类对象访问
    ++b.z;// public成员
    ++d.x;// private不可被派生类访问
    ++d.y;// protected成员在派生类中可以通过派生类对象访问
    ++d.z;// public成员
}
// 用户访问区
void fun(Base &b, Derived &d)
{
    ++x;// 非成员函数
    ++y;// 非成员函数
    ++z;// 非成员函数
    ++b.x; // b的私有
    ++b.y; // b的protected
    ++b.z; // public
    ++d.x; // d的private成员
    ++d.y; // d的protected成员
    ++d.z; // public
}