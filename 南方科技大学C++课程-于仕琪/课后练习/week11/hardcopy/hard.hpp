#include <iostream>
using namespace std;

class PtrHardcopy{
private:
    string *ps;
    int i;
public:
    PtrHardcopy(const string &s = string()):ps(new string(s)),i(0){}
    PtrHardcopy(const PtrHardcopy &p):ps(new string(*(p.ps))),i(p.i){}
    PtrHardcopy &operator=(const PtrHardcopy &rhs);
    ~PtrHardcopy()
    {
        delete ps;
    }
    friend ostream& operator<<(ostream &os,const PtrHardcopy &s);
};
ostream& operator<<(ostream &os,const PtrHardcopy &s);