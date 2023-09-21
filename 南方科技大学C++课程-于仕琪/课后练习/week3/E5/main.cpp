#include <iostream> 
using namespace std;
int main()
{
    int n = 1, fa = 1; // 没有初始化
    do
    {
        fa *= n;
        //cout << "fa = " << fa << endl;
        n++;
    } while (n <= 10);
    cout << "fa = " << fa << endl;
    return 0;
}