// Write a program to calculate sum of first N even natural numbers.

#include <stdio.h>
int main()
{
    int number, i, sum = 0;
    printf("Enter a number:");
    scanf("%d", &number);
    for (i = 1; i <= number; i++)
        sum += 2 * i;
    printf("Sum of first %d even natural numbers is %d", number, sum);
    return 0;
}                       