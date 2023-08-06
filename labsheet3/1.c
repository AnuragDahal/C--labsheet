/*WAP to check whether a number is negative, positive or zero.*/
#include<stdio.h>
int main()
{
    int a;
    printf("enter a number");
    scanf("%d",&a);
    
    if(a>0)
    {
       printf("The number is postive\n");
    }
    else if(a<0)
    {
       printf("The number is negative\n");
    }
    else
    {
       printf("The number is 0");
    }
    return 0;
    }
