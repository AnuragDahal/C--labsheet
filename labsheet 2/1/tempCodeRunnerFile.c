#include<stdio.h>
int main()
{
    int a=5;
    float b=3.23;
    char c='s';
    // display output
    printf("a=%d\nb=%.2f\nc=%c\n",a,b,c);
    // size of variables
    printf("size of int is %zu\n",sizeof(a));
    printf("size of float is %zu\n",sizeof(b));
    printf("size of char is %zu",sizeof(c));
    return 0;
} 