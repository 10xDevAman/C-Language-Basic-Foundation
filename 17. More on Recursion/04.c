// Write a recursive function to calculate sum of squares of first n natural numbers.


#include <stdio.h>

int sumSquares(int n);

int main()
{
    int n;

    printf("Enter value of N: ");
    scanf("%d", &n);

    printf("Sum = %d", sumSquares(n));

    return 0;
}

int sumSquares(int n)
{
    if (n == 1)
        return 1;

    return (n * n) + sumSquares(n - 1);
}