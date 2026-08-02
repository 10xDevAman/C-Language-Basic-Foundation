// Write a function to count the frequency of each element of an array.

#include <stdio.h>

void frequency(int arr[], int size);

int main()
{
    int arr[100];
    int n, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("\nFrequency of each element:\n");
    frequency(arr, n);

    return 0;
}

void frequency(int arr[], int size)
{
    int i, j, count;

    for(i = 0; i < size; i++)
    {
        // Skip already counted elements
        for(j = 0; j < i; j++)
        {
            if(arr[i] == arr[j])
                break;
        }

        if(j != i)
            continue;

        count = 0;

        for(j = 0; j < size; j++)
        {
            if(arr[i] == arr[j])
                count++;
        }

        printf("%d occurs %d time", arr[i], count);

        if(count > 1)
            printf("s");

        printf("\n");
    }
}