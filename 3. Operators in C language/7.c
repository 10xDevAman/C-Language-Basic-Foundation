// 	Write a program to swap values of two int variables without using a third variable.

#include<stdio.h>
int main()
{
    int number1, number2;
    printf("Enter first number: ");
    scanf("%d", &number1);
    printf("Enter the second number: ");
    scanf("%d", &number2);
    printf("\n\t****Without Using Third Variable***");
    printf("\nBefore Swaping :- \n");
    printf("\tFirst number = %d.\n\tSecond number = %d.", number1, number2);
    // Without using thired variable :-
    // for swapping we also can use + & - operator.
    number1 = number1 + number2;
    number2 = number1 - number2;
    number1 = number1 - number2;
    printf("\nAfter Swaping :- \n");
    printf("\tFirst number = %d.\n\tSecond number = %d.", number1, number2);
    return 0;
}