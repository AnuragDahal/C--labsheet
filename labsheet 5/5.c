/*. WAP to display sum of series: 1 + 1/2! + 1/3! + 1/4! + 1/5! ... 1/n!
*/
#include<stdio.h>
int fac(int a)
{
    if(a==0 || a==1)
    return 1;
    else
    return a * fac(a-1);
}
int main()
{
    int n;
    printf("Ënter the number");
    scanf("%d",&n);
    fac(n);
    printf("The factorial of %d is %2d",n,fac(n));
    int i;
    float sum =0.0;
    for(i=1;i<=n;i++)
    {  
        sum = sum +(1.0/fac(i));
    }
    printf("the sum of series is %2f",sum);
    return 0;
}