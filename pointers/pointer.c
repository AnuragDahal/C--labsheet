// Pointers

#include <stdio.h>
void calculate(int a, int b, int c, int *sum, int *product, int *mean)
{
    *sum = a + b + c;
    *product = a * b * c;
    *mean = (float)(a + b + c) / 3;
}
int main()
{
    int a, b, c, sum, product;
    float mean;
    int *sumptr, *productptr, *meanptr;
    sumptr = &sum;
    productptr = &product;
    meanptr = &mean;
    printf("Enter the values of a,b and c");
    scanf("%d%d%d", &a, &b, &c);
    calculate(a, b, c, sumptr, productptr, meanptr);
    printf("The sum of %d,%d and %d is %d\n", a, b, c, *sumptr);
    printf("The product of %d,%d and %d is %d\n", a, b, c, *productptr);
    printf("The mean of %d,%d and %d is %d\n", a, b, c, *meanptr);
    return 0;
}