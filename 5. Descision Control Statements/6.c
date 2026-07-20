// Write a program to check whether the given number is a three digit number or not.

#include<stdio.h>
int main()
{
    int number;
    printf("Enter a number : ");
    scanf("%d", &number);

    if(number > 99 && number < 1000)
        printf("%d is a three digit number.");
    else
        printf("%d is not a three digit number.");
    return 0;
}