#include <iostream> 
using namespace std;
class ConstMember
{
private:
    const int m_a;//必须被初始化，要么通过类内初始值，要么构造函数初始值列表
public:
    ConstMember(int a) : m_a(a) {}
    void display() const
    {
        cout << "The value of the const member variable m_a is: " << m_a << endl;
    }
};

int main()
{
    ConstMember o1{666};
    ConstMember o2{42};
    // ConstMember o3;//已经定义了构造函数，编译器不会合成默认构造函数
    o1.display();
    o2.display();
    // o1 = o2; // const对象无法赋值，编译器合成的拷贝赋值函数被delete
    return 0;
}
// run normally
// The value of the const member variable m_a is: 666
// The value of the const member variable m_a is: 42