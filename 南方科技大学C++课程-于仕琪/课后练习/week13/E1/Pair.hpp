#include <iostream> 
#include <string>
using namespace std;

template <typename T1, typename T2> class Pair;

template <typename T1, typename T2>
ostream& operator<<(ostream &os,const Pair<T1, T2> &p);

template <typename T1, typename T2>
class Pair
{
private:
    T1 key;
    T2 value;
public:
    Pair(T1 k, T2 v) : key(k), value(v){};
    bool operator<(const Pair &p) const;
    friend ostream& operator<<<T1,T2> (ostream &os,const Pair<T1, T2> &p);
};

template <typename T1, typename T2>
bool Pair<T1,T2>::operator<(const Pair &p) const{
    if(key < p.key)
        return true;
    else
        return false;
}

template <typename T1, typename T2>
ostream& operator<<(ostream &os,const Pair<T1, T2> &p)
{
    os << p.key << ' ' << p.value << endl;
    return os;
}