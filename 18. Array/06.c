// Write a program to sort elements of an array of size 10. Take array values from the user.


#include <stdio.h>

int main()
{
    int arr[10];
    int i, j, temp;

    printf("Enter 10 numbers:\n");

    for(i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    
    for(i = 0; i < 9; i++)
    {
        for(j = 0; j < 9 - i; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted Array:\n");

    for(i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}