// Write a program to take time as an input in below format and convert the time format and display the result as given below.
/*
    User Input Time format - "HH:MM"
    Output format - "HH hour and MM minutes"
*/

#include<stdio.h>
int main()
{
    int hour, minutes;
    printf("Enter the time (HH:MM): ");
    scanf("%d:%d", &hour, &minutes);

    printf("%02d hour and %02d minutes", hour, minutes);
    return 0;
}