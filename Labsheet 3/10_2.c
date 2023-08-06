#include<stdio.h>
int main()
{
int n,i,c=0;
printf("Enter any Number:\n");
scanf("%d",&n);
if(n<=0)
{
printf("You have entered %d.\n",n);
}
if(n==1)
{
printf("Neither Prime Nor Composite.");
}
if(n==2)
{
printf("Smallest Prime Number.");
}
if (n>2)
{ for (i=1;i<=n;i++)
{
if(n%i==0)
c=c+1;
}
if (c==2)
printf ("The number is PRIME");
else
 if(n%2==0)
 {
     printf("The number is even");
 }
 else{
    printf("The number is odd");
 }
}
return 0;
}