// WAP to display sum of series: x + x2
// /2! + x3
// /3! + x4
// /4! + x5
// /5! ... xn
// /n!. User defined
// function factorial() and power() should be used to calculate the factorial and power.
#include <stdio.h>
#include <math.h>
int factorial(int x)
{
    int i, fac = 1;
    if (x == 0)
    {
        return 1;
    }
    else
        for (i = x; i >= 1; i--)
        {
            fac = fac * i;
        }
    return fac;
}
int power(int x, int y)
{
    int result=1,i;
    for(i=1;i<=y;i++)
    {
        result=result*x;
    }
    return result;
}
int main()
{
    int x, n , i, sum=0;
    printf("enter the number:");
    scanf("%d", &x);
    printf("enter the value of n");
    scanf("%d", &n);
    printf("The sum of series is \n");
    for(i=1;i<=n;i++)
    {
        sum= sum + (power(x,i))/factorial(i);
    }   
    printf("%d",sum);
    return 0;
}
