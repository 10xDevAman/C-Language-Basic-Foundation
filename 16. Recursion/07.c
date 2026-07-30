// Write a recursive function to print squares of first N natural number.


#include <stdio.h>

void printSquares(int n);

int main()
{
    int n;

    printf("Enter value of N: ");
    scanf("%d", &n);

    printSquares(n);

    return 0;
}

void printSquares(int n)
{
    if (n == 0)
        return;

    printSquares(n - 1);

    printf("%d ", n * n);
}