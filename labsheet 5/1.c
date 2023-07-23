/*WAP to read 10 numbers from user and find their sum and average.
 */
#include <stdio.h>
int main()
{
    int sum = 0, n, i;
    float avg;
    printf("Enter 10 numbers: ");
    for (i = 1; i <= 10; i++)
    {
        scanf("%d", &n);
        sum = sum + n;
    }
    avg = (float)(sum)/10;
    printf("The count is %d\n");
    printf("The sum of numbers is %d\n", sum);
    printf("The average of numbers is %2f\n", avg);
    return 0;
}
