// Write a function to find the sum of first N terms of the series 1!/1+2!/2+3!/3+4!/4+5!/5. . . . . .  n!/n (TSRS)

#include <stdio.h>

long long factorial(int n);
long long seriesSum(int n);

int main()
{
    int n;

    printf("Enter value of N: ");
    scanf("%d", &n);

    printf("Sum = %lld", seriesSum(n));

    return 0;
}

long long factorial(int n)
{
    long long fact = 1;
    int i;

    for(i = 1; i <= n; i++)
        fact *= i;

    return fact;
}

long long seriesSum(int n)
{
    long long sum = 0;
    int i;

    for(i = 1; i <= n; i++)
    {
        sum += factorial(i) / i;
    }

    return sum;
}
