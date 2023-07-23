// using without Recursion

#include <stdio.h>
int main()
{
    int a, i;
    a = 5;
    int fact = 1;
    for (i = a; i >= 1; i--)
        fact = fact * i;
    printf("%d", fact);
    return 0;
}
