// Write a function to merge two array elements and store it in dynamically created array. Return address of this dynamically created array.


#include <stdio.h>
#include <stdlib.h>

int* merge(int *arr1, int size1, int *arr2, int size2);

int main()
{
    int arr1[5] = {10, 20, 30, 40, 50};
    int arr2[3] = {60, 70, 80};

    int *arr3;
    int i;

    arr3 = merge(arr1, 5, arr2, 3);

    printf("Merged Array: ");

    for(i = 0; i < 8; i++)
    {
        printf("%d ", *(arr3 + i));
    }

    // Release dynamically allocated memory
    free(arr3);

    return 0;
}

int* merge(int *arr1, int size1, int *arr2, int size2)
{
    int *arr3;
    int i;

    // Allocate memory for both arrays
    arr3 = (int *)malloc((size1 + size2) * sizeof(int));

    if(arr3 == NULL)
    {
        printf("Memory allocation failed!\n");
        exit(1);
    }

    // Copy first array
    for(i = 0; i < size1; i++)
    {
        *(arr3 + i) = *(arr1 + i);
    }

    // Copy second array
    for(i = 0; i < size2; i++)
    {
        *(arr3 + size1 + i) = *(arr2 + i);
    }

    return arr3;
}