#include "soft.hpp"

PtrSoftcopy& PtrSoftcopy::operator=(const PtrSoftcopy &rhs)
{
    ++(*rhs.num);
    if(--(*num) == 0)
    {
        delete ps;
        delete num;
    }
    ps = rhs.ps;
    i = rhs.i;
    num = rhs.num;
    return *this;
}
ostream& operator<<(ostream &os,const PtrSoftcopy &p)
{
    os << *(p.ps) << ' ' << *(p.num);
    return os;
}