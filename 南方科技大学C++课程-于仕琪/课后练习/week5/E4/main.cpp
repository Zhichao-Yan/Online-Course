#include <iostream>
using namespace std;

int main()
{
    int *arr = new int[5]{1,5,7,9,0};
    for(int i = 4; i >= 0 ; --i)
    {
        cout << *(arr + i) << endl;
    }
    delete []arr;
}