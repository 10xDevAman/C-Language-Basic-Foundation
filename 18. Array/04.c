// Write a program to find the greatest number stored in an array of size 10. Take array values from the user.

#include <stdio.h>

int main()
{
    int arr[10];
    int i, max;

    printf("Enter 10 numbers:\n");

    for(i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    max = arr[0];

    for(i = 1; i < 10; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("Greatest Number = %d\n", max);

    return 0;
}