// Write a program which takes the day number of a week and displays a unique greeting message for the day.

#include <stdio.h>

int main() {
    int day;

    printf("Enter day number (1-7): ");
    scanf("%d", &day);

    switch (day) {
        case 1:
            printf("Monday: Have a fresh and productive week!\n");
            break;

        case 2:
            printf("Tuesday: Keep working hard!\n");
            break;

        case 3:
            printf("Wednesday: Happy Midweek! Stay motivated.\n");
            break;

        case 4:
            printf("Thursday: Almost there! Keep going.\n");
            break;

        case 5:
            printf("Friday: Happy Friday! Enjoy your day.\n");
            break;

        case 6:
            printf("Saturday: Have a relaxing weekend!\n");
            break;

        case 7:
            printf("Sunday: Have a wonderful and peaceful day!\n");
            break;

        default:
            printf("Invalid day number! Please enter a number between 1 and 7.\n");
    }

    return 0;
}