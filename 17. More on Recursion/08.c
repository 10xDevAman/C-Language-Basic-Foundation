// Write a recursive function to print first N terms of Fibonacci series.


#include <stdio.h>

int fibonacci(int n);
void printFibonacci(int n);

int main()
{
    int n;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printFibonacci(n);

    return 0;
}

int fibonacci(int n)
{
    if (n == 0)
        return 0;

    if (n == 1)
        return 1;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

void printFibonacci(int n)
{
    if (n == 0)
        return;

    printFibonacci(n - 1);

    printf("%d ", fibonacci(n - 1));
}