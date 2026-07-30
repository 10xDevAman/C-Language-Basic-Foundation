// Write a recursive function to print octal of a given decimal number.


#include <stdio.h>

void printOctal(int n);

int main()
{
    int n;

    printf("Enter a decimal number: ");
    scanf("%d", &n);

    if (n == 0)
        printf("0");
    else
        printOctal(n);

    return 0;
}

void printOctal(int n)
{
    if (n == 0)
        return;

    printOctal(n / 8);

    printf("%d", n % 8);
}