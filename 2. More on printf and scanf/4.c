// Write a program to calculate volume of a cuboid

#include<stdio.h>
int main()
{
    int length, breadth, height, volume;
    printf("Enter the length, beadth and height of Cuboid : ");
    scanf(" %d %d %d", &length, &breadth, &height);
    volume = length * breadth * height;
    printf("The volume of cuboid having - \n\tLength : %d\n\tBreadth : %d\n\tHeight : %d\nVolume : %d",length, breadth, height, volume);
    return 0;
}