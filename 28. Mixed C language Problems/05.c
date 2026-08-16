// Given an array of size n, reverse it. Input format – The first line contains an integer n denoting the size of the array. The next line contains n space separated integers denoting the elements of array. The output should print the array in the desired order, elements separated by spaces.



#include <stdio.h>

int main()
{
    int n, i, temp;

    scanf("%d", &n);

    int arr[n];

    // Input array
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Reverse array
    for(i = 0; i < n / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    // Print reversed array
    for(i = 0; i < n; i++)
    {
        printf("%d", arr[i]);

        if(i < n - 1)
            printf(" ");
    }

    return 0;
}