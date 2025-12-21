// Write a program to calculate square of a given number. Number is entered by the user.

#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number to get its square: ");
    scanf("%d", &num);
    printf("The Square of %d is %d.", num, num*num);
    return 0;
}