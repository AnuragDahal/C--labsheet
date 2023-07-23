/*WAP  to  pass  1D  array  to  the  minmax()  function.  The  function  should  calculate  the
maximum  and  minimum  among  the  elements  of  the  array.  Print  the  maximum  and
minimum in the main() function.*/
#include <stdio.h>
int minmax(int a[], int *min, int *max)
{
    int i, j;
    *min=a[0];
    *max=a[2];
    for (i = 0; i < 5; i++)
    {   
        if(a[i]<*min)
        {
            *min=a[i];
        }
        if(a[i]>*max)
        {
            *max=a[i];
        }
    }
}
int main()
{
    int a[5], min, max, i, *least, *highest;
    least = &min;
    highest = &max;
    printf("Enter the numbers: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    minmax(a, least, highest);
    printf("The min and max are %d and %d ", *least, *highest);
    return 0;
}