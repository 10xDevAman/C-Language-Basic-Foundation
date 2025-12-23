//	Assume price of 1 USD is INR 84.23. Write a program to take the amount in INR and convert it into USD.

#include<stdio.h>
int main()
{
    int money;
    float dollar;
    printf("Enter the money you want to convert : ");
    scanf("%d", &money);
    dollar = money/84.23;

    printf("You have %.2f USD in %d INR.", dollar, money);
    return 0;
}