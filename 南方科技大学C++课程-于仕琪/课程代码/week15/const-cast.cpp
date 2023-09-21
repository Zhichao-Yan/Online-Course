#include <iostream>
using namespace std;

int main()
{
    int value1 = 100;
    const int value2 = 200;
    cout << "value1 = " << value1 << endl;
    cout << "value2 = " << value2 << endl;
    cout << "------" << endl;
    // int * pv1 = &value1;
    // failed,if succeeded, we can modify const int value2 which is const
    // obviously, it is abnormal to do this.
    //int  *pv = &value2; //  error: invalid conversion from 'const int*' to 'int*'
    int * pv1 = const_cast<int *>(&value1);
    // int * pv2 = &value2; // error
    int * pv2 = const_cast<int *>(&value2);

    (*pv1)++;
    (*pv2)++; 
    
    cout << "value1 = " << value1 << endl;
    cout << "value1(*pv1) = " << (*pv1) << endl;
    cout << "value2 = " << value2 << endl;
    cout << "value2(*pv2)= " << (*pv2) << endl;
    cout << "------" << endl;

    //int & v2 = value2; //error:error: binding reference of type 'int&' to 'const int'
    int& v2 = const_cast<int&>(value2);
    v2++;
    cout << "value2 = " << value2 << endl;
    printf("value2 address = %p\n", &value2);
    cout << "value2(*pv2) = " << (*pv2) << endl;
    printf("pv2 address = %p\n", pv2);
    cout << "value2(v2) = " << v2 << endl;
    printf("v2 address = %p\n", &v2);
    cout << "------" << endl;

   return 0;
}