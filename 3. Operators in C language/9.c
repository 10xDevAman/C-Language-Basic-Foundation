// 	Write a program to swap the values of two int variables without using third variable and arithmetic operators.

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
    // Without using thired variable and Arithmetic Operator:-
    // for swapping we also can use Bitwise operator like ^ (XOR).
    number1 = number1 ^ number2;
    number2 = number1 ^ number2;
    number1 = number1 ^ number2;
    printf("\nAfter Swaping :- \n");
    printf("\tFirst number = %d.\n\tSecond number = %d.", number1, number2);
    return 0;
}