// Write a program to print the first N even natural number in reverse order.

#include <stdio.h>
int main()
{
    int number, i;
    printf("Enter a number:");
    scanf("%d", &number);
    for (i = number; i > 0; i--)
        printf("%d ", 2 * i);
    return 0;
}