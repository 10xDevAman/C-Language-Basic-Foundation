// Write a program to find second largest in an array. Take array values from the user.


#include <stdio.h>
#include <limits.h>

int main()
{
    int n, i;
    int arr[100];
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

        if(arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }

    if(secondLargest == INT_MIN)
        printf("Second largest element does not exist.\n");
    else
        printf("Second Largest Element = %d\n", secondLargest);

    return 0;
}