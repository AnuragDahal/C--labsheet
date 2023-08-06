// WAP to display whether a number is even or odd using conditonal operator
#include<stdio.h>
int main()
{
    int a,b;
    a=4;
    printf("a=%d\n",a);
    // using conditional operator
    (a%2==0)?(printf("%d is even")):(printf("%d is odd"));
    return 0;
}
