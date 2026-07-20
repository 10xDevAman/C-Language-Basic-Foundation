// Write a program to check whether a given number is an even or an odd number.

#include<stdio.h>
int main()
{
    int number;
    printf("Enter a number : ");
    scanf("%d", &number);
    if( number % 2)
        printf("%d is odd", number);
    else
        printf("%d is even.", number);
    return 0;
}