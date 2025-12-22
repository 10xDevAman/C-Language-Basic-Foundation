//	Write a program to swap values of two int variables in single line arithmetic expression

#include<stdio.h>
int main()
{
    int number1, number2;
    printf("Enter two numbers : ");
    scanf("%d %d", &number1, &number2);
    printf("\nBefore Swaping :- \n");
    printf("\tFirst number = %d.\n\tSecond number = %d.", number1, number2);
    number1 = (number2 + number1) - (number2 = number1);
    printf("\nAfter Swaping :- \n");
    printf("\tFirst number = %d.\n\tSecond number = %d.", number1, number2);
    
    return 0;
}