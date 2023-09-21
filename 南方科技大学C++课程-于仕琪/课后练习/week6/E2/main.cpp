#include <iostream>
using namespace std;
int * create_array(int size)
{
    int *arr = new int[size];// fix
    for(int i = 0; i < size; i++)
        arr[i] = i * 10;
    return arr;  // warning: address of local variable 'arr' returned
}
int main() {
    int len = 16;
    int *ptr = create_array(len);
    for(int i = 0; i < len; i++)
        cout << ptr[i] << " ";
    delete []ptr; // add 
    return 0;
}
// if ignore the warning and run the program
// segmentation fault  ./a.out 