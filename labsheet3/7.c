// WAP to find the all the roots of a quadratic equation.
#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,discriminant,root1,root2,imgpart,realPart;
    printf("Enter the coefficients of x^2 and x and constant respectively: ");
    scanf("%lf%lf%lf",&a,&b,&c);
    discriminant= b*b -4*a*c;
    // conditon for real and different roots discriminant greater than 0
    if(discriminant>0){
    root1= (-b + sqrt(discriminant))/(2*a);
    root2= (-b - sqrt(discriminant))/(2*a);
     printf("the roots of quadratic equation are %lf%Lf",root1,root2);
    }
    // conditon for real and equal roots discriminant =0
    else if (discriminant==0)
    {
     root1=root2=(-b)/(2*a);
     printf("The roots are %2.lf%2.lf",root1,root2);
    }
    // condition for imaginary roots(discriminant<0)
    else{
        realPart = -b / (2 * a);
        imgpart = sqrt(-discriminant) / (2 * a);
        printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realPart, imgpart, realPart, imgpart);
    }   
}