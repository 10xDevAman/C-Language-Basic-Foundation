// Write a program to reverse a given number.

#include <stdio.h>
int main()
{
    int number, reversed = 0, remainder;
    printf("Enter a number:");
    scanf("%d", &number);
    while (number != 0)
    {
        remainder = number % 10;
        reversed = reversed * 10 + remainder;
        number /= 10;
    }
    printf("Reversed Number: %d", reversed);
    return 0;
}