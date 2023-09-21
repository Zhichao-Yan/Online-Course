#include <iostream>
using namespace std;
int main()
{
    for (size_t n = 2; n >= 0; n--)
        cout << "n=" << n << " ";
    return 0;
}
// size_t n = 0 是个无符号数
// n - 1 不是负数而是一个很大的数