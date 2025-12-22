// 	Write a program to print unit digit of a given number.

#include<stdio.h>
int main()
{
    int number, new_number;
    printf("Enter a nubmer:");
    scanf("%d", &number);
    new_number = number%10;
    printf("The unit digit of %d is %d", number, new_number);
    return 0;
}