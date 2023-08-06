#include <stdio.h>
int main()
{
    float a, b, result;
    printf("Enter two numbers: ");
    scanf("%f%f", &a, &b);
    char ch;
    printf("Enter an operand: ");
    scanf(" %c", &ch);//space given before %c helps to ignore new line as it doesnt take enter as a character. 
    switch (ch)
    {
    case '+':
        result = a + b;
        printf("The sum is %.2f",result ); break;
    case '-':
        result = a - b;
        printf("The difference is %.2f",result ); break;
    case '*':
        result = a * b;
        printf("The product is %.2f",result ); break;
    case '/':
        result = a / b;
        printf("The quotient is %.2f",result );

            default :
            printf("Invalid Input");
    }
}
