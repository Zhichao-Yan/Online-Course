#pragma once
#include <iostream>
using namespace std;

class PtrSoftcopy{
private:
    string *ps;
    int i;
    size_t* num;
public:
    PtrSoftcopy(const string &s = string()):ps(new string(s)),i(0),num(new size_t(1)){}
    PtrSoftcopy(const PtrSoftcopy &p):ps(p.ps),i(p.i),num(p.num)
    {
        ++(*num);
    }
    ~PtrSoftcopy()
    {
        if(--(*num) == 0)
        {
            delete ps;
            delete num;
        }
    }
    PtrSoftcopy &operator=(const PtrSoftcopy &rhs);
    friend ostream& operator<<(ostream &os,const PtrSoftcopy &p);
};
ostream& operator<<(ostream &os,const PtrSoftcopy &p);