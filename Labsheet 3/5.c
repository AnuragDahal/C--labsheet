// WAP to check whether the year entered by the user is leap year or not.
#include<stdio.h>
int main()
{
    int year;
    // Asking for user input
    printf("Enter any year: ");
    scanf("%d",&year);
    if (year%4==0)
    printf("The %d year is leap year\n",year);
    else
    printf("The %d year is not a leap year",year);
    return 0;
}