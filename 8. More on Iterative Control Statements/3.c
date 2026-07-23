// Write a program to print the first n natural numbers in Reverse order.

#include <stdio.h>
int main()
{
    int number, i;
    printf("Enter a number:");
    scanf("%d", &number);
    for (i = number; i >= 1; i--)
        printf("%d ", i);
    return 0;
}