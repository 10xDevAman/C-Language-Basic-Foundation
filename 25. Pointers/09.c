// Write a function to move first value of the array to the position where all smaller values will be in the left and greater values will be in the right.

#include <stdio.h>

void partition(int *ptr, int size);

int main()
{
    int arr[7] = {50, 20, 70, 10, 40, 80, 30};
    int i;

    printf("Before partition: ");

    for(i = 0; i < 7; i++)
    {
        printf("%d ", arr[i]);
    }

    partition(arr, 7);

    printf("\nAfter partition:  ");

    for(i = 0; i < 7; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

void partition(int *ptr, int size)
{
    int pivot = *ptr;
    int i = 1;
    int j;
    int temp;

    for(j = 1; j < size; j++)
    {
        if(*(ptr + j) < pivot)
        {
            temp = *(ptr + i);
            *(ptr + i) = *(ptr + j);
            *(ptr + j) = temp;

            i++;
        }
    }

    temp = *ptr;
    *ptr = *(ptr + i - 1);
    *(ptr + i - 1) = temp;
}