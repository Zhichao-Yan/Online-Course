#include <iostream> 
using namespace std;
int main()
{
    int a[][4] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    // a的类型：数组指针常量，其中数组大小为4，数组元素类型为int
    // a的值为a[][4]首元素的地址。即第1行数组的地址 a+1第2行数组的地址 *(a+1)得到第二行数组
    // *(a+1)放在等号右边等于使用该数组的名字，取该第二行数组第一个元素的地址，放入指针p
    int *p = *(a + 1);//p指向9
    p += 3;//指向15
    cout << "*p++ = " << *p++ << ",*p = " << *p << endl;// 15 17
    const char *pc = "Welcome to programming.", *r;
    long *q = (long *)pc;//强制类型转换 long为8个字节
    q++; //地址移动8个字节
    r = (char *)q;
    cout << r << endl; //r打印字符串"to programming."
    unsigned int m = 0x3E56AF67;
    //cout << sizeof(short) <<endl; //short占2个字节
    unsigned short *pm = (unsigned short *)&m;
    cout << "*pm=" << hex << *pm << endl;// 0xAF67
    return 0;
}