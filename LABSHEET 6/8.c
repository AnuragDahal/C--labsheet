/*WAP to illustrate the concept of global and static variables.*/
#include <stdio.h>
int add()
{
    static int a;
    a++;
    return a;
}
int main()
{
    int i = 1;
    while (i <= 3)
    {
        printf("%d\n", add());
        i++;
    
    }
}