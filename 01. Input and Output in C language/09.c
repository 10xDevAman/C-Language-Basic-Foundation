// Write a program to calculate area of rectange. Input appropriate data from user.

#include<stdio.h>
int main()
{
    int length, breadth;
    printf("Enter length and breadth of a rectangle :");
    scanf("%d %d", &length, &breadth);
    printf("The area of rectangle is %d.", length*breadth);
    return 0;
}