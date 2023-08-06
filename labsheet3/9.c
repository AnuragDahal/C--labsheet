/*WAP in C to input marks of five subjects C-programming, Physics, Maths, Applied
Mechanics and Basic electrical. Display whether the student passed or failed. Take
F.M=100 and P.M.=40 For passed students calculate percentage and grade according
to following:
Percentage >= 90% : A
Percentage >=80% :  B
Percentage >= 70% : C
Percentage >= 60% : D
Percentage >= 40% : E */
#include <stdio.h>
int main()
{
    float c, p, m, am, be, total_marks_obtained, total, percentage;
    printf("Enter the marks of C-Programming: \n");
    scanf("%f",&c);
    printf("Enter the marks of Physics:  \n");
    scanf("%f",&p);
    printf("Enter the marks of Maths: \n");
    scanf("%f",&m);
    printf("Enter the marks of Applied Mechanics: \n");
    scanf("%f",&am);
    printf("Enter the marks of Basic Electrical: \n");
    scanf("%f",&be);
    
    if (c >= 40 && p >= 40 && m > -40 && am >= 40 && be >= 40)
    {
        printf("You have passed\n");
        total = 500;
        total_marks_obtained = c + p + m + am + be;
        printf("You have obtained a total score of %.2f", total_marks_obtained);
        percentage = (total_marks_obtained / total) * 100;
        printf("Your percentage is %.2f%%\n", percentage);
        if (percentage >= 40 && percentage < 60)
        {
            printf("Grade=E\n");
        }
        else if (percentage >= 60 && percentage < 70)
        {
            printf("Grade=D\n");
        }
        else if (percentage >= 70 && percentage < 80)
        {    
            printf("Grade=C\n");
        }
        else if (percentage >= 80 && percentage < 90)
        {
            printf("Grade=B\n");
        }
        else if (percentage >= 90)
        {
            printf("Grade=A\n");
        }
    }
    else
    {
        printf("You have failed...\n");
    }
    
    return 0;
}
