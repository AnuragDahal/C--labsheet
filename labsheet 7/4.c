/*WAP to count the frequency of the elements in an array*/

#include <stdio.h>
int main()
{
    int a[5], b[5], j, count, i;
    printf("Enter the elements in array");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
        b[i] = a[i];
    }
    for (i = 0; i < 5; i++)
    {
        count = 0;
        for (j = 0; j < 5; j++)
        {
            if (a[i] == b[j])
            {
                count++;
            }
        }
        printf("The frequency of %d is %d.\n", a[i], count);
    }
}