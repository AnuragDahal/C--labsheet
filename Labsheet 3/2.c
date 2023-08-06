/*WAP to find maximum between three numbers entered by the user.*/
#include<stdio.h>
int main()
{
    int num1,num2,num3;
    // taking input from user
    printf("Enter 3 numbers: ");
    scanf("%d%d%d",&num1,&num2,&num3);
    // Evaluating to find the maximum number
    if(num1>num2&&num1>num3)
    {
        printf("%d is maximum",num1);
    }
    else if (num2>num1 && num2>num3)
    {
        printf("%d is maximum",num2);
    }
    else
    {
        printf("%d is maximum",num3);
    }
    return 0;
}