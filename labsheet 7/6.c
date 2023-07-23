/*WAP to multiply matrix of different size if possible using 2D array.*/
#include <stdio.h>
int main()
{
    int a[3][3], b[3][4], i, j, k, l;
    printf("enter the elements in 1st matrix: ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", a[i][j]);
        }
        printf("\n");
    }
    printf("enter the elements in 2nd matrix");
    for (k = 0; k < 3; k++)
    {
        for (l = 0; l < 4; l++)
        {
            scanf("%d", b[k][l]);
        }
        printf("\n");
    }
}