// Write a recursive function to print reverse of a given number.

#include <stdio.h>

void printReverse(int n);

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 0)
        printf("0");
    else
        printReverse(n);

    return 0;
}

void printReverse(int n)
{
    if (n == 0)
        return;

    printf("%d", n % 10);

    printReverse(n / 10);
}