// Write a program to print the first n even natural numbers.
#include <stdio.h>
int main()
{
    int number, i;
    printf("Enter a number:");
    scanf("%d", &number);
    for (i = 1; i <= number; i++)
        printf("%d ", 2 * i);
    return 0;
}