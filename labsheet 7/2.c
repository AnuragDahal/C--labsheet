/*WAP to calculate and print the sum and average of n elements of array.*/
#include <stdio.h>
int main()
{
    int a[10], i, sum = 0;
    float average;
    printf("Enter the numbers: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 10; i++)
    {
        sum = sum + a[i];
    }
    average =(float) sum / i;
    printf("The sum is %d\n", sum);
    printf("The average is %.2f", average);
    return 0;
}