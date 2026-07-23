// Ques10. Write a program to print a table of N.

#include <stdio.h>
int main()
{
    int number, i;
    printf("Enter a number:");
    scanf("%d", &number);
    for (i = 1; i <= 10; i++)
        printf("\n%d * %d = %d", number, i, number * i);
    return 0;
}