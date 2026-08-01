// Write a program to calculate the average of numbers stored in an array of size 10. Take array values from the user.

#include <stdio.h>

int main()
{
    int arr[10];
    int i, sum = 0;
    float average;

    printf("Enter 10 numbers:\n");

    for(i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < 10; i++)
    {
        sum += arr[i];
    }

    average = (float)sum / 10;

    printf("Average = %.2f\n", average);

    return 0;
}