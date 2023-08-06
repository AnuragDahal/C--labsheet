/*WAP to input a character from the user and check whether the character is Alphabet 
or not. If the character is Alphabet then show whether it is uppercase or lowercase*/
#include<stdio.h>
int main()
{
    char a;
    printf("enter character,alphabet or number: ");
    scanf("%c",&a);
    //to check input
    if((a>=65 && a<=90)||(a>=97 && a<=122))
        printf("%c is an alphabet\n",a);
    if(a>=65 && a<=90)
        printf("It is in upperecase\n",a);
    else if(a>=97 && a<=122)
        printf("It is in lowercase\n");
    else
        printf("It is not an alphabet\n");
}
