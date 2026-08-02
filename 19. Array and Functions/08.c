// Write a function to print all unique elements in an array.


#include <stdio.h>

void printUnique(int arr[], int size);

int main()
{
    int arr[100];
    int n, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Unique Elements: ");
    printUnique(arr, n);

    return 0;
}

void printUnique(int arr[], int size)
{
    int i, j, count;

    for(i = 0; i < size; i++)
    {
        count = 0;

        for(j = 0; j < size; j++)
        {
            if(arr[i] == arr[j])
                count++;
        }

        if(count == 1)
            printf("%d ", arr[i]);
    }
}