/*WAP to print the following pattern
 */
#include <stdio.h>
int main()
{
    int row, col, n, num = 1;
    printf("Enter the values of n");
    scanf("%d", &n);
    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= row; col++)
        {
            printf("%d ", num);
            num++;
        }

        printf("\n");
    }
    return 0;
}