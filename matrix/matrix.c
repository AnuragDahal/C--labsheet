#include <stdio.h>
int main()
{
    int row, col;
    int n[100][100];
    int i, j;
    printf("Enter the order of matrix");
    scanf("%d%d", &row, &col);
    printf("Enter the first matrix");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &n[i][j]);
        }
    }
    printf("The matrix is \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d\t", n[i][j]);
        }
        printf("\n");
    }
    
}