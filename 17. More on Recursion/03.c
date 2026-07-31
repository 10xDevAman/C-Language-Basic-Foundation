// Write a recursive function to calculate sum of first N even natural numbers.


#include <stdio.h>

int sumEven(int n);

int main()
{
    int n;

    printf("Enter value of N: ");
    scanf("%d", &n);

    printf("Sum = %d", sumEven(n));

    return 0;
}

int sumEven(int n)
{
    if (n == 1)
        return 2;

    return (2 * n) + sumEven(n - 1);
}