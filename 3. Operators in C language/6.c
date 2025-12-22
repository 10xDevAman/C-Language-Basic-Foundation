// 	Write a program to swap values of two int variables.

#include<stdio.h>
int main()
{
    int number1, number2;
    printf("Enter first number: ");
    scanf("%d", &number1);
    printf("Enter the second number: ");
    scanf("%d", &number2);

    printf("\nBefore Swaping :- \n");
    printf("\tFirst number = %d.\n\tSecond number = %d.", number1, number2);
    int temp;
    temp = number1;
    number1 = number2;
    number2 = temp;
    printf("\nAfter Swaping :- \n");
    printf("\tFirst number = %d.\n\tSecond number = %d.", number1, number2);
    return 0;
}