// Write a recursive function to calculate sum of first N natural numbers.


#include <stdio.h>

int n;

int sum();

int main()
{
    printf("Enter value of N: ");
    scanf("%d", &n);

    printf("Sum = %d", sum());

    return 0;
}

int sum()
{
    if (n == 1)
        return 1;

    int temp = n;
    n--;

    return temp + sum();
}