/*WAP to display weather a number is Armstrong or not.*/

#include<stdio.h>
#include<math.h>
int main()
{
    int num, orgnum, rem, result = 0, count = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    orgnum = num;
    while (num % 10 != 0)
    {
        count++;
        num = num / 10; // remove one digit form behind
    }
    num = orgnum;
    while (orgnum != 0)
    {
        rem = orgnum % 10;
        result=result + pow(rem, count);
        orgnum /= 10;
        printf("%d, %d, %d\n", rem, result, orgnum);
    }
    if (result == num)
    {
        printf("The %d number is Armstrong number", result);
    }
    else
    {
        printf("the number is not a armstrong number");
    }
    return 0;
}
