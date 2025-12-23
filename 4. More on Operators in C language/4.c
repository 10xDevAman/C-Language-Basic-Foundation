// 	Write a program to make the last digit of a number stored in a variable as zero.
//      (Example – if x=2345 then make it x=2340)

#include<stdio.h>
int main()
{
    int number,num;
    printf("Enter a number : ");
    scanf("%d", &number);
    num = number;
    number = number/10*10;
    printf("Before Number is %d.\nAfter making last digit Zero\nNew Number is %d.", num, number);
    return 0;
}