// WAP to calculate the area and volume of a cylinder using pre-processor directive for value of PI
#include<stdio.h>
#include<math.h>
#define pi 3.14
int main()
{
    int radius,height;
    float area,volume;
    // taking input from user
    printf("Enter the radius and height of a cylinder");
    scanf("%d%d",&radius,&height);
    area=2*pi*radius*(radius+height);
    volume= pi*pow(radius,2)*height;
    // display area and volume
    printf("The area of cylinder is %.2f\n",area);
    printf("The volume of cylinder is %.2f",volume);
    return 0;

}