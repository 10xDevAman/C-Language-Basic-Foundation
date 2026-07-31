// Write a recursive function to calculate HCF of two numbers.

#include <stdio.h>

int hcf(int a, int b);

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    printf("HCF = %d", hcf(a, b));

    return 0;
}

int hcf(int a, int b)
{
    if (b == 0)
        return a;

    return hcf(b, a % b);
}