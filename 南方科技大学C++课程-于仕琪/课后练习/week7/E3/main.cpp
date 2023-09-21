#include <cmath>

bool vabs(int * p, int n)
{
    if(p == nullptr)
        return false;
    for(int i = 0;i < n;++i)
    {
        *(p + i) = fabs(*(p + i));
    }
    return true;
}
bool vabs(float * p, int n)
{
    if(p == nullptr)
        return false;
    for(int i = 0;i < n;++i)
    {
        *(p + i) = fabs(*(p + i));
    }
    return true;
}
bool vabs(double * p, int n)
{
    if(p == nullptr)
        return false;
    for(int i = 0;i < n;++i)
    {
        *(p + i) = fabs(*(p + i));
    }
    return true;
}