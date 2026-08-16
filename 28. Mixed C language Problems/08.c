// Define a function to remove duplicate numbers from an array. Return the resulting array.


#include <stdio.h>
#include <stdlib.h>

int* removeDuplicates(int *arr, int size, int *newSize)
{
    int *result;
    int i, j;
    int found;

    result = malloc(size * sizeof(int));

    if(result == NULL)
    {
        printf("Memory allocation failed!\n");
        exit(1);
    }

    *newSize = 0;

    for(i = 0; i < size; i++)
    {
        found = 0;

        // Check whether element already exists
        for(j = 0; j < *newSize; j++)
        {
            if(arr[i] == result[j])
            {
                found = 1;
                break;
            }
        }

        // If not duplicate, store it
        if(found == 0)
        {
            result[*newSize] = arr[i];
            (*newSize)++;
        }
    }

    // Resize array according to actual size
    result = realloc(result, (*newSize) * sizeof(int));

    return result;
}

int main()
{
    int arr[] = {10, 20, 10, 30, 20, 40, 30};
    int size = 7;
    int newSize;
    int *result;
    int i;

    result = removeDuplicates(arr, size, &newSize);

    printf("Array after removing duplicates:\n");

    for(i = 0; i < newSize; i++)
    {
        printf("%d ", result[i]);
    }

    printf("\n");

    free(result);

    return 0;
}