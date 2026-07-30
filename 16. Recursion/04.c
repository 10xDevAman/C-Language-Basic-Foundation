// Write a recursive function to print first N odd natural numbers in reverse order.


#include <stdio.h>

void printReverseOdd(int n);

int main()
{
    int n;

    printf("Enter value of N: ");
    scanf("%d", &n);

    printReverseOdd(n);

    return 0;
}

void printReverseOdd(int n)
{
    if (n == 0)
        return;

    printf("%d ", 2 * n - 1);

    printReverseOdd(n - 1);
}