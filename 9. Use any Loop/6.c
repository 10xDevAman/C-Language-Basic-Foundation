// Write a program to calculate factorial of a number.

#include <stdio.h>
int main()
{
    int number, i;
    long long factorial = 1;
    printf("Enter a number: ");
    scanf("%d", &number);
    for (i = 1; i <= number; i++)
    {
        factorial = factorial * i;
    }
    printf("Factorial of %d is %lld", number, factorial);
    return 0;
}                                               