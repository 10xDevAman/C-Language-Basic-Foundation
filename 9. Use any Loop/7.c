// Write a program to count digits in a given number.


#include <stdio.h>
int main()
{
    int number, count = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    while (number != 0)
    {
        number = number / 10;
        count++;
    }
    printf("Number of digits: %d", count);
    return 0;
}