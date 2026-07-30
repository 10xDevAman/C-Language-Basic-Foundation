// Write a recursive function to print first N natural numbers in reverse order.


#include <stdio.h>

void printReverse(int n);

int main()
{
    int n;

    printf("Enter value of N: ");
    scanf("%d", &n);

    printReverse(n);

    return 0;
}

void printReverse(int n)
{
    if (n == 0)
        return;

    printf("%d ", n);

    printReverse(n - 1);
}