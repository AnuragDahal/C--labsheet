/*WAP to take two float number in main(). Write a function single user define function
calculator() to perform the addition, subtraction and multiplication. The sum,
difference  and  product  should  be  displayed  from  the  main()  function.  [Use  the
concept of pass by reference.].*/
#include <stdio.h>
float calculator(float *x, float *y, float *sum, float *diff, float *mul, float *div)
{
    *sum = *x + *y;
    *diff = *x - *y;
    *mul = *x * *y;
    *div = *x / *y;
}
int main()
{
    float n1, n2, add, sub, mul, div, *num1, *num2, *a, *s, *m, *d;
    printf("Enter two numbers: ");
    scanf("%f %f", &n1, &n2);
    num1 = &n1;
    num2 = &n2;
    a = &add;
    s = &sub;
    m = &mul;
    d = &div;
    calculator(num1, num2, a, s, m, d);
    printf("The sum of %.2f and %.2f is %.2f\n", n1, n2, *a);
    printf("The difference of %.2f and %.2f is %.2f\n", n1, n2, *s);
    printf("The product of %.2f and %.2f is %.2f\n", n1, n2, *m);
    printf("The quotient of %.2f and %.2f is %.2f\n", n1, n2, *d);
    return 0;
}
