// Write a program to print squares of the first N natural numbers.

#include <stdio.h>
int main()
{
    int number, i;
    printf("Enter a number:");
    scanf("%d", &number);
    for (i = 1; i <= number; i++)
        printf("%d ", i * i);
    return 0;
}