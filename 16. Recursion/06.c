// Write a recursive function to print first N even natural numbers in reverse order.

#include <stdio.h>

void printReverseEven(int n);

int main()
{
    int n;

    printf("Enter value of N: ");
    scanf("%d", &n);

    printReverseEven(n);

    return 0;
}

void printReverseEven(int n)
{
    if (n == 0)
        return;

    printf("%d ", 2 * n);

    printReverseEven(n - 1);
}