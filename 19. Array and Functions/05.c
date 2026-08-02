// Write a function to find the first occurrence of adjacent duplicate elements in an array. Function has to return the value of the element.


#include <stdio.h>

int firstAdjacentDuplicate(int arr[], int size);

int main()
{
    int arr[100], n, i, result;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    result = firstAdjacentDuplicate(arr, n);

    if(result == -1)
        printf("No adjacent duplicate found.");
    else
        printf("First Adjacent Duplicate = %d", result);

    return 0;
}

int firstAdjacentDuplicate(int arr[], int size)
{
    int i;

    for(i = 0; i < size - 1; i++)
    {
        if(arr[i] == arr[i + 1])
            return arr[i];
    }

    return -1;
}