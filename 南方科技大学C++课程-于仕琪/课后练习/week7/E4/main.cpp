#include <iostream>
using namespace std;

template <typename T>
int compare(const T &a, const T &b)
{
    if (a < b)
        return -1;
    if (a > b)
        return 1;
    return 0;
}

template int compare<char>(const char&, const char&);
template int compare<int>(const int&,const int&);

struct stuinfo
{
    string name;
    int age;
};

template<>
int compare(const stuinfo &a,const stuinfo &b)
{
    if(a.age > b.age)
        return 1;
    if(a.age < b.age)
        return -1;
    return 0;
}


int main()
{
    int a = 89, a1 = 100;
    float b = 3.1415f, b1 = 32.87f;
    char ch = 'A', ch1 = 'a';
    stuinfo s{"yzc",25},s1{"qhx",26};
    cout << "compare of the two integers:" << compare(a, a1) << endl;
    cout << "compare of the two floats:" << compare(b, b1) << endl;
    cout << "compare of the two characters:" << compare(ch, ch1) << endl;
    cout << "compare of the two stuinfo:" << compare(s, s1) << endl;
}
