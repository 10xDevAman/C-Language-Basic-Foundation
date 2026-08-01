// Write a program in C to copy the elements of one array into array. Take array values from the user.


#include <stdio.h>

int main()
{
    int arr1[100], arr2[100];
    int n, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }

    for(i = 0; i < n; i++)
    {
        arr2[i] = arr1[i];
    }

    printf("\nOriginal Array:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr1[i]);
    }

    printf("\nCopied Array:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr2[i]);
    }

    return 0;
}