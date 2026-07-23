// Write a program to print MySirG N times on the screen.

#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter a number:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        printf("MySirG\n");
    return 0;
}