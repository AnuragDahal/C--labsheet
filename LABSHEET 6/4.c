// WAP to display the nth Fibonacci number using recursion

#include <stdio.h>
int fibonacci(int a)
{
    int i, result;
    if (a == 1)
        return 0;
    if (a == 2)
        return 1;
    else
    {
        for (i = 1; i <= a; i++)
        {
            return fibonacci(a - 1) + fibonacci(a - 2);
        }
    }
}
int main()
{
    int b;
    printf("Enter the number: ");
    scanf("%d", &b);
    printf("the fibonaaci series is \n");
    printf("%d", fibonacci(b));
    return 0;
}