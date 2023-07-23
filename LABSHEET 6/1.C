// Write a program to add, subtract, multiply and divide two integers using user defined
// function add(), sub(), mul() and div().

#include <stdio.h>
void add(int a, int b)
{
    int sum;
    sum = a + b;
    printf("%d\n",sum);
}
void sub(int a, int b)
{
    int diff;
    diff = a - b;
    printf("%d\n",diff);
}
void mul(int a, int b)
{
    int product;
    product = a * b;
    printf("%d\n",product);
}
void div(int a, int b)
{
    float div;
    div = (float)a / b;
    printf("%.2f\n",div);
}
int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    printf("the sum of %d and %d is", a, b);
    add(a, b);
    printf("the difference of %d and %d is", a, b);
    sub(a, b);
    printf("the product of %d and %d is", a, b);
    mul(a, b);
    printf("the quotient of %d and %d is", a, b);
    div(a, b);
    return 0;
}