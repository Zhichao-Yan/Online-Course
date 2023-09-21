#include <iostream>
#include <string>
using namespace std;

class Employee{
private:
    string name;
    string ssn;
public:
    Employee(const string &n,const string &s):name(n),ssn(s)
    {
        cout << "the base class constructor is invoked" << endl;
    }
    virtual ~Employee()
    {
        cout << "the base class destructor is invoked" << endl;
    }
    string getName() const { return name; }
    string getSSN() const { return ssn; }
    void setName(const string &n) { name = n; }
    void setSSN(const string &s) { ssn = s; }
    double earning() { return 0.0; }
    virtual void show()
    {
        cout << "Name is:" << name << "," << "SSN is: " << ssn << endl; 
    }
};

class SalariedEmployee:public Employee{
private:
    double salary;
public:
    SalariedEmployee(const string &name,const string &ssn,double s):Employee(name,ssn),salary(s)
    {
        cout << "The derived class constructor is invoked" << endl;
    }
    ~SalariedEmployee()
    {
        cout << "The derived class destructor is invoked" << endl;
    }
    double getSalary() const
    {
        return salary;
    }
    void setSalary(double s)
    {
        salary = s;
    }
    double earning()
    {
        return getSalary();
    }
    void show()
    {
        cout << "Name is:" << getName() << "," << "SSN is: " << getSSN() << "," << "Salary is:"<< salary << endl;         
    }
};

int main()
{
    Employee *pe = new SalariedEmployee("Wangfan","1001",2000);
    pe->show();
    delete pe;
    return 0;
}