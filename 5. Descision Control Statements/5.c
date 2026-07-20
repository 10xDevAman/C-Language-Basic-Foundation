// Write a program to check whether a given number is even or odd number without using bitwise operator.

#include<stdio.h>
int main()
{
    int number, product, division;
    printf("Enter a number : ");
    scanf("%d", &number);

    division = number / 2;

    product = number * 2;

    if ( number == product )
        printf("%d is even number");
    else
        printf("%d is odd number");

    return 0;
}