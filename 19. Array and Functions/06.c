// Write a function to swap two elements of given array with specified indices.


#include <stdio.h>

void swapElements(int arr[], int size, int index1, int index2);

int main()
{
    int arr[100];
    int n, i;
    int index1, index2;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter first index: ");
    scanf("%d", &index1);

    printf("Enter second index: ");
    scanf("%d", &index2);

    swapElements(arr, n, index1, index2);

    printf("Array after swapping:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

void swapElements(int arr[], int size, int index1, int index2)
{
    int temp;

    if(index1 < 0 || index1 >= size || index2 < 0 || index2 >= size)
    {
        printf("Invalid Indices\n");
        return;
    }

    temp = arr[index1];
    arr[index1] = arr[index2];
    arr[index2] = temp;
}