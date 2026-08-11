// Write a program to calculate the difference between two time periods.


#include <stdio.h>

struct Time
{
    int hours;
    int minutes;
    int seconds;
};

struct Time difference(struct Time t1, struct Time t2);

int main()
{
    struct Time t1, t2, diff;

    printf("Enter first time (HH MM SS): ");
    scanf("%d %d %d", &t1.hours, &t1.minutes, &t1.seconds);

    printf("Enter second time (HH MM SS): ");
    scanf("%d %d %d", &t2.hours, &t2.minutes, &t2.seconds);

    diff = difference(t1, t2);

    printf("\nTime Difference = %02d:%02d:%02d\n",
           diff.hours, diff.minutes, diff.seconds);

    return 0;
}

struct Time difference(struct Time t1, struct Time t2)
{
    int total1, total2, diff;
    struct Time result;

    // Convert both times into seconds
    total1 = t1.hours * 3600 +
             t1.minutes * 60 +
             t1.seconds;

    total2 = t2.hours * 3600 +
             t2.minutes * 60 +
             t2.seconds;

    // Absolute difference
    if(total1 > total2)
        diff = total1 - total2;
    else
        diff = total2 - total1;

    // Convert seconds back to HH:MM:SS
    result.hours = diff / 3600;
    diff = diff % 3600;

    result.minutes = diff / 60;
    result.seconds = diff % 60;

    return result;
}