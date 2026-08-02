// Write a function to count a total number of duplicate elements in an array.(Means element that occurs 2 times in an array)


#include <stdio.h>

int countDuplicate(int arr[], int size);

int main()
{
    int arr[100];
    int n, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Total Duplicate Elements = %d", countDuplicate(arr, n));

    return 0;
}

int countDuplicate(int arr[], int size)
{
    int i, j;
    int count, duplicate = 0;

    for(i = 0; i < size; i++)
    {
        // Skip if element already counted
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

        if(count == 2)
            duplicate++;
    }

    return duplicate;
}