#include <iostream>
using namespace std;

union ipv4address{
    std::wint_t address32;
    std::wint_t address8[4];
};

int main()
{
    union ipv4address ip;

    cout << "sizeof(ip) = " << sizeof(ip) << endl;

    ip.address8[3] = 127;
    ip.address8[2] = 0;
    ip.address8[1] = 0;
    ip.address8[0] = 1;

    cout << "The address is " ;
    cout << +ip.address8[3] << ".";
    cout << +ip.address8[2] << ".";
    cout << +ip.address8[1] << ".";
    cout << +ip.address8[0] << endl;

    cout << std::hex;
    cout << "in hex " << ip.address32 << endl;

    return 0;
}