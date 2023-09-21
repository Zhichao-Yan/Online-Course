#include <iostream>
#include <typeinfo>
#include <stdio.h>
int main()
{
    int a[] = {2, 4, 6, 8, 10}, y = 1, *p;
    p = &a[1];//元素4的地址保存在指针变量p中
    printf("a = %p\np = %p\n", a, p);// a[0]和a[1]地址
    for (int i = 0; i < 3; i++)
        y += *(p + i);// 1 + 4 + 6 + 8
    printf("y = %d\n\n", y); // 19
    int b[5] = {1, 2, 3, 4, 5};
    // 对数组名取地址&b 得到该指向该数组类型的指针
    int *ptr = (int *)(&b + 1); //&b+1是+20个字节，b相当于是一个int[5]大小的指针变量
    std::cout << typeid(&b).name()<< std::endl;//PA5_i 是一个指针，指针类型为长度5的数组，数组元素类型为int
    std::cout << typeid(b).name()<< std::endl;//A5_i 数组，长度为5，元素类型为int
    printf("b = %d\nb+4 = %d\nptr = %d\n", b, b + 4, ptr);
    printf("%d,%d\n", *(b + 1), *(ptr - 1));
    return 0;
}