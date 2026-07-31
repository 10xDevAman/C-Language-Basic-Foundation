// Write a recursive function to calculate factorial of a given number.

#include <stdio.h>

long long factorial(int n);

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Factorial of a negative number is not defined.");
    }
    else
    {
        printf("Factorial = %lld", factorial(n));
    }

    return 0;
}

long long factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;

    return n * factorial(n - 1);
}