// Write a function to find the greatest number from the given array of any size. (TSRS)

#include <stdio.h>

int greatest(int arr[], int size);

int main()
{
    int arr[100], n, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Greatest Element = %d", greatest(arr, n));

    return 0;
}

int greatest(int arr[], int size)
{
    int i, max;

    max = arr[0];

    for(i = 1; i < size; i++)
    {
        if(arr[i] > max)
            max = arr[i];
    }

    return max;
}