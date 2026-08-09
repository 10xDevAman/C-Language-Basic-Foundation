// Write a function to sort an array of int type values. [ void sort(int *ptr, int size); ]


#include <stdio.h>

void sort(int *ptr, int size);

int main()
{
    int arr[10];
    int i;

    printf("Enter 10 elements: ");

    for(i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    sort(arr, 10);

    printf("Sorted Array: ");

    for(i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

void sort(int *ptr, int size)
{
    int i, j, temp;

    for(i = 0; i < size - 1; i++)
    {
        for(j = 0; j < size - 1 - i; j++)
        {
            if(*(ptr + j) > *(ptr + j + 1))
            {
                temp = *(ptr + j);
                *(ptr + j) = *(ptr + j + 1);
                *(ptr + j + 1) = temp;
            }
        }
    }
}