#include <stdio.h>

int main()
{
    char str[20];
    printf("Enter a string:");
    gets(str);
    printf("You entered:");
    puts(str);
    return 0;
}