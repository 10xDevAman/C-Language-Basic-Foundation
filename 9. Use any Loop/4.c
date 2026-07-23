// Write a program to calculate sum of squares of first N natural numbers.

#include <stdio.h>
int main()
{
    int number, i, sum = 0;
    printf("Enter a number:");
    scanf("%d", &number);
    for (i = 1; i <= number; i++)
        sum += i * i;
    printf("Sum of squares of first %d natural numbers is %d", number, sum);
    return 0;
}                               