// Write a function to find the smallest number from the given array of any size.(TSRS)

#include <stdio.h>

int smallest(int arr[], int size);

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

    printf("Smallest Element = %d", smallest(arr, n));

    return 0;
}

int smallest(int arr[], int size)
{
    int i, min;

    min = arr[0];

    for(i = 1; i < size; i++)
    {
        if(arr[i] < min)
            min = arr[i];
    }

    return min;
}