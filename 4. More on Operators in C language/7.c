// 	Write a program to take a three digit number from the user and rotate its digits by one position towards the right.

#include<stdio.h>
int main()
{
    int number, temp;
    printf("Enter three digit number: ");
    scanf("%d", &number);
    // temp = number % 10;
    // temp * 1000 + number/10;

    temp = (number % 10) * 100 + number/10;
    printf("Before Shifting Number is %d.", number);
    printf("\nAfter Shifting Number becomes %d.", temp);
    return 0;
}