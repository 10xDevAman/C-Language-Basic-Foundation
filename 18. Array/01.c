// Write a program to calculate the sum of numbers stored in an array of size 10. Take array values from the user.

#include <stdio.h>

int main()
{
    int arr[10];
    int sum = 0, i;

    printf("Enter 10 numbers:\n");

    for(i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < 10; i++)
    {
        sum += arr[i];
    }

    printf("Sum = %d\n", sum);

    return 0;
}