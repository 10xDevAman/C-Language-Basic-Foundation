// Write a program in C to count the digits of a given number using recursion.


#include <stdio.h>

int countDigits(int n);

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)
        n = -n;   // Handle negative numbers

    printf("Total Digits = %d", countDigits(n));

    return 0;
}

int countDigits(int n)
{
    if (n == 0)
        return 0;

    return 1 + countDigits(n / 10);
}