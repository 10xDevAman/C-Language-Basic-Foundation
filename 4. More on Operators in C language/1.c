// 	Wite a program to input a three digit number and display the sum of the digits 

#include<stdio.h>
int main()
{
    int number, temp = 0;
    printf("Enter three digit number : ");
    scanf("%d", &number);
    int num = number;
    while(!(number == 0))
    {
        temp += number % 10;
        number /=10;
    }
    printf("The sum of the %d is %d.",num, temp);
    return 0;
}