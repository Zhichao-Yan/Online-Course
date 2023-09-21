#include <iostream> 
using namespace std;
int main()
{
    int n = 5;
    int sum = 0;// 未定义的变量，值为随机的
    while (n > 0)
    {
        sum += n;
        cout << "n=" << n << " ";
        cout << "sum=" << sum << " ";
        // add --n;
        --n;
    }
    return 0;
}