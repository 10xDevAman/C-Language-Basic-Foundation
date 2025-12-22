// 	Write a program to print a given number without its last digit.

#include<stdio.h>
int main()
{
    int number, new_number;
    printf("Enter a number :");
    scanf("%d", &number);
    new_number = number/10;
    printf("%d is the new number without last digit from  %d.", new_number, number);
    return 0;
}