// WAP to calculate factorial using Recursion

#include <stdio.h>
int factorial(int x)
{
    int fac = 1, i;
    if (x == 0 || x == 1)
    return 1;
    else
    return x * factorial(x-1);
}
int main()
{
    int a;
    printf("Enter the number ");
    scanf("%d",&a);
    
}