/*WAP to multiply matrix of different size if possible using 2D array.*/
#include <stdio.h>
int main()
{
    int a[10][10], b[10][10], c[10][10], i, j, k, m, n, p, q, sum = 0;
    printf("Enter the order of the first matrix: ");
    scanf("%d %d", &m, &n);
    printf("Enter the order of the second matrix: ");
    scanf("%d %d", &p, &q);
    if (n == p)
    {
        printf("Enter the elements of the first matrix: ");
        for (i = 0; i < m; i++)
            for (j = 0; j < n; j++)
                scanf("%d", &a[i][j]);
        printf("Enter the elements of the second matrix: ");
        for (i = 0; i < p; i++)
            for (j = 0; j < q; j++)
                scanf("%d", &b[i][j]);
                //mul
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < q; j++)
            {
                for (k = 0; k < p; k++)
                {
                    sum += a[i][k] * b[k][j];
                }
                c[i][j] = sum;
                sum = 0;
            }
        }
        printf("The resultant matrix is: \n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < q; j++)
                printf("%d ", c[i][j]);
            printf("\n");
        }
    }
    else
        printf("Multiplication not possible.");
    return 0;
}