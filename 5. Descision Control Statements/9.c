// 	Write a program to check whether a given year is leap year or not.

#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year nmber in YYYY format: ");
    scanf("%d", &year);

    if(year % 100)
    {
        if(year % 4)
            printf("%d is Not Leap Year", year);
        else
            printf("%d is Leap Year", year);
    }
    else
    {
        if(year % 400)
            printf("%d is not Leap Year.", year);
        else
            printf("%d is a Leap Year", year);
    }
    return 0;
}