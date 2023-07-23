/*WAP to display sum of series: x + x2
/2! + x3
/3! + x4
/4! + x5
/5! ... x
n
/n!*/
#include <stdio.h>
#include <math.h>
int fac(int a)
{
    if (a == 0 || a == 1)
        return 1;
    else
        return a * fac(a - 1);
}
int main()
{
    int n, i;
    float sum = 0;
    printf("Enter the value of x ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        sum = sum + pow(n, i) / fac(n);
    printf("The sum of the series is %.2f", sum);
    return 0;
}