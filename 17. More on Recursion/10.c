// Write a program in C to calculate the power of any number using recursion.

#include <stdio.h>

long long power(int base, int exponent);

int main()
{
    int base, exponent;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exponent);

    if (exponent < 0)
    {
        printf("Negative exponent is not supported in this program.");
    }
    else
    {
        printf("%d^%d = %lld", base, exponent, power(base, exponent));
    }

    return 0;
}

long long power(int base, int exponent)
{
    if (exponent == 0)
        return 1;

    return base * power(base, exponent - 1);
}