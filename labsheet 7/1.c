/* WAP to store 10 integer elements in an array and print it. */
#include<stdio.h>
int main()
{
    int a[10],i;
    printf("Enter the numbers: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]); 
    }
    printf("the value is");
    for(i=0;i<10;i++)
    {
        printf("\n%d",a[i]);
    }
}