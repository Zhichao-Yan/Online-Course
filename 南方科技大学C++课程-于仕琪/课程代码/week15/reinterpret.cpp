#include <iostream>
using namespace std;

int main()
{
    int i = 18;
    float * p1 = reinterpret_cast<float *>(i); // static_cast will fail
    int * p2 = reinterpret_cast<int*>(p1);

    printf("p1=%p\n", p1);
    printf("p2=%p\n", p2);
    /*
    p1=0x12 decimal 18 converted into hex is 0x12
    p2=0x12
    */
    return 0;
}



