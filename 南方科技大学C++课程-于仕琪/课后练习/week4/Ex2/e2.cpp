#include <stdio.h>
union data
{
    int n;
    char ch;
    short m;
};
int main()
{
    union data a;
    printf("%d, %d\n", sizeof(a), sizeof(union data));
    a.n = 0x40;
    // %X 输出格式为大写字母格式十六进制
    printf("%X, %c, %hX\n", a.n, a.ch, a.m); 
    a.ch = '9';
    printf("%X, %c, %hX\n", a.n, a.ch, a.m);
    a.m = 0x2059;
    printf("%X, %c, %hX\n", a.n, a.ch, a.m);
    a.n = 0x3E25AD54;
    printf("%X, %c, %hX\n", a.n, a.ch, a.m);
    a.n = 1;
    if(a.ch == '\0')
        printf("big-endian\n");
    else
        printf("little-endian\n");//小端

    int i = 1;
    char c = *((char*)(&i));
    if(c == '\0')
        printf("big-endian\n"); //小端
    else
        printf("littler-endian\n");//小端 因为是arm处理器，所以可能是小端
    return 0;
}