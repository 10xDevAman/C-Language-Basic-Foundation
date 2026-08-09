// Write a function to merge two arrays in a given array. [ void merge (int *arr1, intsize1, int*arr2, int size2, int*arr3); ]


#include <stdio.h>

void merge(int *arr1, int size1, int *arr2, int size2, int *arr3);

int main()
{
    int arr1[5], arr2[5], arr3[10];
    int i;

    printf("Enter 5 elements of first array: ");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter 5 elements of second array: ");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr2[i]);
    }

    merge(arr1, 5, arr2, 5, arr3);

    printf("\nMerged Array: ");

    for(i = 0; i < 10; i++)
    {
        printf("%d ", arr3[i]);
    }

    return 0;
}

void merge(int *arr1, int size1, int *arr2, int size2, int *arr3)
{
    int i;

    for(i = 0; i < size1; i++)
    {
        *(arr3 + i) = *(arr1 + i);
    }

    for(i = 0; i < size2; i++)
    {
        *(arr3 + size1 + i) = *(arr2 + i);
    }
}