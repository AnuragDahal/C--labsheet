/*WAP to display the multiplication table of integer given by the user.*/
#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter the integer ");
    scanf("%d", &n);
    printf("The multiplication table for %d is \n",n);
    for (i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d \n", n, i, n * i);
    }
    return 0;
}