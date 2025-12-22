// Write a program to calculate circumference of a circle.

#include<stdio.h>
#define PI 3.14
int main()
{
    int radius;
    float circumference;
    printf("Enter the radius of the circle : ");
    scanf(" %d", &radius);
    circumference = 2 * PI * radius;
    printf("Area : %.2f", circumference);
    return 0;
}