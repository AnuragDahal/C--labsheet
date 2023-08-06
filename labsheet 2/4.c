//WAP to input two numbers from user and display the minimum using conditional operator. 
#include<stdio.h>
int main()
{
   int a,b;
   //user input 
   printf("Enter first number:");
   scanf("%d",&a);
   printf("Enter the second number:");
   scanf("%d",&b);
   //conditional operator
   (a>b)?(printf("%d is greater",a)):(printf("%d is greater",b));
   return 0;
}