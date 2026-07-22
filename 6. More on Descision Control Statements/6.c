// Write a program to check whether a given number is divisible by 7 or divisible by 3.

#include <stdio.h>
int main()
{
    int number;
    printf("Enter a number :");
    scanf("%d", &number);
    if (number % 7 == 0)
        printf("Number is Divisible by 7");
    else
        printf("Number is not divisible by 7");
    if (number % 3 == 0)
        printf("Number is Divisible by 3");
    else
        printf("Number is not divisible by 3");
    return 0;
}