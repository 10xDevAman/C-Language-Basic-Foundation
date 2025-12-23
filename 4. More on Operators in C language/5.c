// 	Write a program to input a number from user and also input a digit. Append a digit in the number and print the resulting number. (Example – number=234 and digit=9 then the resulting number is 2349)

#include<stdio.h>
int main()
{
    int number, num, digit;
    printf("Enter a number and a Digit: ");
    scanf("%d %d", &number, &digit);
    num = number;
    num = number * 10 + digit;
    printf("Old Number is %d.\nNew number is %d.", number, num);
    return 0;
}