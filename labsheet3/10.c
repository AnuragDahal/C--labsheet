/*WAP to input a number from user. If user enters a number less than or equal to zero 
 If user then program should just display the number.enters 1 the program should 
display output as neither prime nor composite, if user enters 2 the program should 
display output as smallest and only even prime number. If user enters any number 
greater than 2 the program should check whether the number is prime or not, also if 
the number is not prime the program should display whether it is even or odd*/
#include<stdio.h>
#include<math.h>
int main()
{ int num,i;
// taking input from user
    printf("Enter your number: ");
    scanf("%d",&num);
    if(num<=0)
    {
        printf("You entered %d\n",num);
    }
    else if(num==1)
    {
        printf("%d is neither prime nor composite\n",num);
    }
    else if(num==2)
    {
        printf("%d is smallest and only even prime number.\n",num);
    }
    if(num>=2)
    {  for (i=0;i<10;i++)
    {   i=i+1;
        if(num%i!=0 && num%num==0)//checking for prime
        {
        printf("%d is prime number\n",num);
        }

    }
        else if(num%2==0)//checking for even
        {
            printf("%d is even number\n",num);

        }
    }
    else
    {
        printf("%d is odd\n",num);
    }
    return 0;   
}
