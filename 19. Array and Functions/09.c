// Write a function to merge two arrays of the same size sorted in descending order.


#include <stdio.h>

void mergeArray(int arr1[], int arr2[], int arr3[], int size);

int main()
{
    int arr1[100], arr2[100], arr3[200];
    int size, i;

    printf("Enter size of each array: ");
    scanf("%d", &size);

    printf("Enter %d elements of First Array (Descending Order):\n", size);
    for(i = 0; i < size; i++)
        scanf("%d", &arr1[i]);

    printf("Enter %d elements of Second Array (Descending Order):\n", size);
    for(i = 0; i < size; i++)
        scanf("%d", &arr2[i]);

    mergeArray(arr1, arr2, arr3, size);

    printf("\nMerged Array:\n");

    for(i = 0; i < 2 * size; i++)
        printf("%d ", arr3[i]);

    return 0;
}

void mergeArray(int arr1[], int arr2[], int arr3[], int size)
{
    int i = 0, j = 0, k = 0;

    while(i < size && j < size)
    {
        if(arr1[i] > arr2[j])
            arr3[k++] = arr1[i++];
        else
            arr3[k++] = arr2[j++];
    }

    while(i < size)
        arr3[k++] = arr1[i++];

    while(j < size)
        arr3[k++] = arr2[j++];
}