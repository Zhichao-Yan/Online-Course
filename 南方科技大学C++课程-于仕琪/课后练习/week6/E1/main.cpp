#include <iostream>
using namespace std;
#define SIZE 5
int sum(const int *pArray, int n);
int main()
{
    int const *pa = new int[SIZE]{3,5,8,2,6};
    try{
        int total = sum(pa,SIZE);
        cout << "sum = " << total << endl;
        delete []pa;//fix and add 
    }catch(invalid_argument err)
    {
        cout << err.what() << endl;
    }
    return 0;
}
int sum(const int *pArray, int n)
{
    if(pArray == nullptr)
    {
        throw invalid_argument("pArray指针为空，计算失败");
    }
    int s = 0;
    for(int i = 0; i < n; i++)
         s += pArray[i];
     return s;
}