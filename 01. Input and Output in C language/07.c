// Write a program to calculate sum of two integers. Numbers are taken form users through keyboard.

#include<stdio.h>
int main()
{
    int num1, num2;
    printf("Enter two numbers:");
    scanf("%d %d", &num1, &num2);
    printf("Sum of %d and %d is %d", num1, num2, num1 + num2);
    return 0;
}