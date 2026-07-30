// Write a recursive function to print first N even natural numbers.


#include <stdio.h>

void printEven(int n);

int main()
{
    int n;

    printf("Enter value of N: ");
    scanf("%d", &n);

    printEven(n);

    return 0;
}

void printEven(int n)
{
    if (n == 0)
        return;

    printEven(n - 1);

    printf("%d ", 2 * n);
}