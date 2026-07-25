// Write a program to find the area of the circle. Take radius of circle from the user as input and print the result in the below given formate.

/*Ecpected output format -- "Area of circle is A having the radius R". Replace A with area & R with radius.*/


#include<stdio.h>
#define PI 3.14
int main()
{
    int radius;
    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);
    printf("Area of circle is %.2f having the radius %d.", PI*radius*radius, radius);
    
}