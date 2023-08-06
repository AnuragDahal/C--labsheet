// swapping without third variable.
#include<stdio.h>
int main()
{
    int a,b;
    a=2;
    b=4;
    printf("before swapping\na=%d\nb=%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("values of a and b after swapping\na=%d\nb=%d",a,b);
    return 0;
}