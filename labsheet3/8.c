#include<stdio.h>
int main()
{
    int a,b;
    char ch;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the operator: ");
    scanf("%d",&ch);
    printf("Enter the second number: ");
    scanf("%d",&a);
    if(ch=="+")
    { int sum =a+b;
        printf("The sum of two numbers is %d",sum);
    }
    else if(ch=="-")
    {
       int diff=a-b;
        printf("The difference of two number is %d",diff);
    }
    else if (ch=="*")
    {
        float product= a*b;
        printf("The product of two numbers is%d",product);
    }
    else if(ch=="/")
    {
        float quotient= a/b;
        printf("The quotient of two number is %d",quotient);
    }
    return 0;
}