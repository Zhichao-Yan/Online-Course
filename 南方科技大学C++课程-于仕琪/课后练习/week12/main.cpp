#include <iostream>
#include <string>
using namespace std;
class parent{
private:
    int id;
    string name;
public:
    parent():id(1),name("null")
    {
        cout << "calling constructor parent()\n" << endl;
    }
    parent(int i, string n):id(i),name(n)
    {
        cout << "calling constructor parent(int i,string n)\n" << endl;
    }
    friend ostream& operator<<(ostream &os,const parent &p)
    {
        os << "parent:" << p.id << "," << p.name;
        return os;
    }
};


class child: public parent{
private:
    int age;
public:
    child():age(0)
    {
        cout << "calling constructor child()\n" << endl;
    }
    child(int age):age(age)
    {
        cout << "calling constructor child(int)\n" << endl;
    }
    child(const parent &p,int age):parent(p),age(age)
    {
        cout << "calling constructor child(parent,int)\n" << endl;
    }
    friend ostream& operator<<(ostream &os,const child &c)
    {
        os << (parent&)c << " child:" << c.age;
        return os;
    }
    child(const child &c):age(c.age)
    {
        cout << "calling copy constructor child(const child&)\n" << endl;
    }
};

int main()
{
    parent p(101,"Liming");
    child c1(19);
    cout <<"values in c1:" << c1 << endl;
    child c2(p,20);
    cout <<"values in c2:" << c2 << endl;
    child c3 = c2;
    cout <<"values in c3:" << c3 << endl;
    child c4;
    cout <<"values in c4 before assignment:" << c4 << endl;
    c4 =c2;
    cout <<"values in c4 after assignment:" << c4 << endl;

}