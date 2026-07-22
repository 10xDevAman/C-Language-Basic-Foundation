//	Write a program to check whether a given number is a three-digit number or not.

#include <stdio.h>
int main()
{
    int number;
    printf("Enter a number:");
    scanf("%d", &number);
    if (number > 99 && number < 1000)
        printf("%d is three digit number", number);
    else
        printf("%d is not three digit number.", number);
    return 0;
}