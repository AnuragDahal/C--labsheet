#include<stdio.h>
int main()
{
    int row,col,i,j,n[100][100],row1,col2,n2[100][100],k,l;
    printf("Enter the order of first matrix");
    scanf("%d%d", &row,&col);
    printf("Enter the first matrix");
    for ( i=0;i<row;i++);
    {
        for(j=0;j<col;j++);
        {
            scanf("%d",&n[i][j]);
        }
    }
    printf("Enter the order of second matrix");
    scanf("%d",&row1,&col2);
    printf("Enter the second matrix");
    for(k=0;k<row1;k++)
    {
        for(l=0;l<col2;l++)
        {
            scanf("%d",n2[k][l]);
        }
    }
    if(col==row1)
    {
        for(k=0;k<row;k++)
        {
            for(l=0;l<col2;l++)
            {
                printf("%d",n[i][j]+n2[k][l]);
            }
        }
    }
    else
    printf("The matrix cannot be added as per rule of matrix");
    return 0;
}


