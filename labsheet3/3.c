/*WAP to input a character from the user and check whether the character is vowel or
consonant*/
#include<stdio.h>
int main()
{
    char z[20];
    // taking user input
    printf("Enter a character: ");
    scanf("%c",&z);
    // checking for vowel or consonant
    if (z=="a"||z=="e"||z=="i"||z=="o"||z=="u")
    {
        printf("The character is vowel");
    }
    else
    {
        printf("The character is consonant");
    }
    return 0;
}


    

