// Write a recursive function to calculate sum of first N odd natural numbers.


#include <stdio.h>

int sumOdd(int n);

int main()
{
    int n;

    printf("Enter value of N: ");
    scanf("%d", &n);

    printf("Sum = %d", sumOdd(n));

    return 0;
}

int sumOdd(int n)
{
    if (n == 1)
        return 1;

    return (2 * n - 1) + sumOdd(n - 1);
}