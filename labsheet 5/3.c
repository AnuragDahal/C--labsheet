/*. WAP to input two integer values from the user and print the even number between the 
range of integers. Also count the even number and display the count as well [Hint: if 
user enters 10 and 100. The program should print and count even numbers between 10 
and 100].
*/

#include<stdio.h>
int main()
{
    int num1,num2,i,count=0;
    printf("enter the first number ");
    scanf("%d",&num1);
    printf("enter the last number ");
    scanf("%d",&num2);
    for(i=num1;i<=num2;i++)
    {
        printf("%d ",i);
        count++;
    }
    printf("There are %d even numbers between %d and %d ",count,num1,num2);
    return 0;
}