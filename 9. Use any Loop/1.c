// Write a program to calculate sum of the first N natural numbers.

#include <stdio.h>
int main()
{
    int number, i, sum = 0;
    printf("Enter a number:");
    scanf("%d", &number);
    for (i = 1; i <= number; i++)
        sum += i;
    printf("Sum of first %d natural numbers is %d", number, sum);
    return 0;
}                   