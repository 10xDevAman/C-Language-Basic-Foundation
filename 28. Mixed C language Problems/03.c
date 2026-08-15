// Write a program to print system date.


#include <stdio.h>
#include <time.h>

int main()
{
    time_t currentTime;
    struct tm *localTime;

    currentTime = time(NULL);

    localTime = localtime(&currentTime);

    printf("System Date: %02d/%02d/%d\n",
           localTime->tm_mday,
           localTime->tm_mon + 1,
           localTime->tm_year + 1900);

    return 0;
}