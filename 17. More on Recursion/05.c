// Write a recursive function to calculate sum of digits of a given number.

#include <stdio.h>

int sumDigits(int n);

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Sum of Digits = %d", sumDigits(n));

    return 0;
}

int sumDigits(int n)
{
    if (n == 0)
        return 0;

    return (n % 10) + sumDigits(n / 10);
}