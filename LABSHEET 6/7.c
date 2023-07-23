/*WAP  to  input  a  integer  number  in  main().  Write  a  user  define  function  isPrime()  to 
calculate  whether  the  number  is  prime  of  not.  Print  whether  the  number  is  prime  or 
not from the main().*/
#include<stdio.h>
int isPrime(int x)
{
    int count=0,i;
    for(i=1;i<=x;i++)
    {
        if(x%i==0)
        count+=1;
        else
        count=0;
    }
    if(count=2)
    return 1;
    else
    return 0;
}
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    if (isPrime(num)==1)
    printf("%d is prime",num);
    else
    printf("%d is not prime",num);
    return 0;
}