// WAP to swap variables with and without using third variable.

// With third variable
#include<stdio.h>
int main()
{
    int a,b,c; //c is a temporary variable
    a=5,b=7;
    // display values
    printf("a=%d\nb=%d\n",a,b);
    // swapping values
    c=a;
    a=b;
    b=c;
    printf("values after swapping\n");
    printf("a=%d\nb=%d\n",a,b);
    return 0;

}
