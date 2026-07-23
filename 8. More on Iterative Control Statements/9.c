// Write a program to print cubes of the first natural numbers.

#include <stdio.h>
int main()
{
    int number, i;
    printf("Enter a number:");
    scanf("%d", &number);
    for (i = 1; i <= number; i++)
        printf("%d ", i * i * i);
    return 0;
}