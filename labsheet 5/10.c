#include <stdio.h>
#include <math.h>
int main()
{
    int n, n1, rem, num = 0, i, count = 0;
    printf("Enter the number you want to reverse: ");
    scanf("%d", &n);
    printf("%d\n", n);
    n1 = n;
    while (n % 10 != 0)
    {
        count++;
        n = n / 10;//remove last digit from a number
    }
    printf("%d\n", count);
    for (i = count - 1; i >= 0; i--)
    {
        rem = n1 % 10;
        num = num + rem * pow(10, i);
        count = count - 1;
        n1 = n1 / 10;
    }
    printf("the reversed of %d is %d", n1, num);
    return 0;
}