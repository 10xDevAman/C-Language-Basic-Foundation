// Ques10.	Write a program which takes the month number as an input and display number of days in that month.

#include <stdio.h>
int main()
{
    int month;
    printf("Enter the month number : ");
    scanf("%d", &month);
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        printf("Month has 31 days.");
    else if (month == 4 || month == 6 || month == 9 || month == 11)
        printf("Month has 30 days.");
    else if (month == 2)
        printf("Month has 28 or 29 days.");
    else
        printf("Please enter a valid month number.");
    return 0;
}