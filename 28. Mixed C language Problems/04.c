// Write a program to print system time.


#include <stdio.h>
#include <time.h>

int main()
{
    time_t currentTime;
    struct tm *localTime;

    currentTime = time(NULL);

    localTime = localtime(&currentTime);

    printf("System Time: %02d:%02d:%02d\n",
           localTime->tm_hour,
           localTime->tm_min,
           localTime->tm_sec);

    return 0;
}