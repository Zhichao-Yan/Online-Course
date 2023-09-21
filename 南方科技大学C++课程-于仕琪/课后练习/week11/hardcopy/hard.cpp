#include  "hard.hpp"

PtrHardcopy& PtrHardcopy::operator=(const PtrHardcopy &rhs)
{
    auto ptr = new string(*(rhs.ps));
    delete ps;
    i = rhs.i;
    ps = ptr;
    return *this;
}
ostream& operator<<(ostream &os,const PtrHardcopy &s)
{
    os << *(s.ps) << ' ' << s.i;
    return os;
}