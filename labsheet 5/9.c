#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows:");
    scanf("%d", &n);
    int n2=n;
    for (int row = 1; row <= n2; row++)
    {   
        for (int space = n-1; space >= 1; space--)
        {
            printf(" ");
        }
        for (int str = 2 * row - 1; str>=1 ; str--)
        {
            printf("*");
        }
        printf("\n");
        n=n-1;
    }
}