// Write a recursive function to print first N odd natural numbers


#include <stdio.h>

void printOdd(int n);

int main()
{
    int n;

    printf("Enter value of N: ");
    scanf("%d", &n);

    printOdd(n);

    return 0;
}

void printOdd(int n)
{
    if (n == 0)
        return;

    printOdd(n - 1);

    printf("%d ", 2 * n - 1);
}