// Write a program to print the first N natural numbers.

#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter a number:");
    scanf("%d", &n);
    for (i = 1; i <= 10; i++)
        printf("%d ", i);
    return 0;
}