#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class parent{
private:
    int id;
    char *name;
public:
    parent(int i = 0,const char *n = "null");
    parent(const parent &p);
    virtual ~parent();
    parent& operator=(const parent &prhs);
    friend ostream& operator<<(ostream &os,const parent &p);
};
parent::parent(int i,const char *n)
{
    cout << "calling parent default constructor parent()\n";
    id = i;
    name = new char[std::strlen(n) + 1];
    strncpy(name,n,strlen(n)+1);
}
class child:public parent{
private:
    char *style;
    int age;
public:
    child(int i = 0,const char *n = "null",const char *s = "null",int a = 0);
    child(const child &c);
    ~child();
    child& operator=(const child &crhs);
    friend ostream& operator<<(ostream &os,const child &c);
};
child::child(int i,const char *n,const char *s,int a):parent(i,n)
{
    cout << "calling child default constructor child()\n";
    age = a;
    style = new char[std::strlen(s) + 1];
    strncpy(style,s,strlen(s)+1);
}
parent::~parent()
{
    cout << "call parent destructor" << endl;
    delete []name;
}
child::~child()
{
    cout << "call child destructor" << endl;
    delete []style;
}
parent::parent(const parent &p)
{
    cout << "calling parent copy constructor" << endl;
    id = p.id;
    name = new char[strlen(p.name) + 1];
    strncpy(name,p.name,strlen(p.name)+1);
}
child::child(const child &c):parent(c)
{
    cout << "calling child copy constructor" << endl;
    age = c.age;
    style = new char[strlen(c.style) + 1];
    strncpy(style,c.style,strlen(c.style)+1);
}
child& child::operator=(const child &crhs)
{
    cout << "calling child assignment operator\n";
    if(this == &crhs)
        return *this;
    parent::operator=(crhs);
    delete[]style;
    age = crhs.age;
    style = new char[strlen(crhs.style) + 1];
    strncpy(style,crhs.style,strlen(crhs.style)+1);
    return *this;
}
parent& parent::operator=(const parent &prhs)
{
    cout << "calling parent assignment operator:\n";
    if(this == &prhs)
        return *this;
    delete []name;
    this->id = prhs.id;
    name = new char[strlen(prhs.name) + 1];
    strncpy(name,prhs.name,strlen(prhs.name)+1);
    return *this;
}
int main()
{
    parent p1;
    cout << "values in p1\n" << p1 << endl;
    parent p2(101,"Liming");
    cout << "values in p2\n" << p2 << endl;
    parent p3(p1);
    cout << "values in p3\n" << p3 << endl;
    p1 = p2;
    cout << "values in p1\n" << p1 << endl;

    child c1;
    cout << "values in c1\n" << c1 << endl;
    child c2(201,"wuhong","teenageer",15);
    cout << "values in c2\n" << c2 << endl;
    child c3(c1);
    cout << "values in c3\n" << c3 << endl;
    c1 = c2;
    cout << "values in c1\n" << c1 << endl;
    return 0;
}