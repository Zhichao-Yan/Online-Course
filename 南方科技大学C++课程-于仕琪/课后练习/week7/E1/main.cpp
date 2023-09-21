#include "match.hpp"
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Please input a string:" << endl;
    getline(cin,str);
    char ch;
    cout << "Please input a character:" << endl;
    cin >> ch;
    const char *ptr = match(str.c_str(),ch);
    if(ptr == nullptr)
    {
        cout << "Not Found" << endl;
    }else{
        cout << ptr << endl;
    }
}