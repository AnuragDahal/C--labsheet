# include <stdio.h>
int main()
{
    int row,col;
    int n[100];
    int i,j;
    printf("Enter the order of matrix");
    scanf("%d%d",&row,&col);
    printf("Enter the matrix");
    scanf("%d",&n);
    for (i=1;i<=row;i++)
    {
        for(col=1;col<=3;col++)
        {
            printf("%d\t",col);