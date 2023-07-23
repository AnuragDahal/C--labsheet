// Functions in C
#include <stdio.h>
int Calculate(int a, int b)
{
    int product;
    product = a * b;
    return product;
}
int main()
{
    int a, b, product;
    printf("Enter the values of a and b");
    scanf("%d%d", &a, &b);
    Calculate(a, b);
    printf("The product of %d and %d is %d", a, b, Calculate(a, b));
}
// Pointers
