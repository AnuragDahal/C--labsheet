// WAP to take two numbers in main(). Write a function Swap() to swap the values of
// the variables. Print the swapped values in main().
#include <stdio.h>
int Swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y= temp;
}
int main()
{
    int a, b, *num1, *num2;
    printf("Enter the two numbers: ");
    scanf("%d%d", &a, &b);
    num1 = &a;
    num2 = &b;
    printf("The values before swapping are %d %d\n", a, b);
    Swap(num1, num2);
    printf("The values after swapping are %d %d\n", a, b);
    return 0;
}
