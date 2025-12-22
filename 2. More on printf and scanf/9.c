// Write a program to take date as an input in below given format and convert the date format and display the result as given below.

/* User Input date format - "DD/MM/YYYY"  (22/09/2025)    */
/* Output format - "Day - DD , Month - MM , Year - YYYY" (Day-22, Month-09, Year-2025)*/

#include <stdio.h>
int main()
{
    int date, month, year;
    printf("Enter Date (DD/MM/YYYY):");
    scanf("%d/%d/%d", &date, &month, &year);

    printf("Day - %02d , Month - %02d , Year - %04d", date, month, year);
    return 0;
}