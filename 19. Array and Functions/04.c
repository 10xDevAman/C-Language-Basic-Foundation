// Write a function to rotate an array by n position in d direction. The d is an indicative value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )


#include <stdio.h>

void rotateArray(int arr[], int size, int n, int d);

int main()
{
    int arr[100];
    int size, i, n, d;

    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);

    for(i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter number of rotations: ");
    scanf("%d", &n);

    printf("Enter direction (0 = Left, 1 = Right): ");
    scanf("%d", &d);

    rotateArray(arr, size, n, d);

    printf("Rotated Array:\n");

    for(i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

void rotateArray(int arr[], int size, int n, int d)
{
    int i, j, temp;

    n = n % size;

    if(d == 0)        // Left Rotation
    {
        for(i = 0; i < n; i++)
        {
            temp = arr[0];

            for(j = 0; j < size - 1; j++)
            {
                arr[j] = arr[j + 1];
            }

            arr[size - 1] = temp;
        }
    }
    else if(d == 1)   // Right Rotation
    {
        for(i = 0; i < n; i++)
        {
            temp = arr[size - 1];

            for(j = size - 1; j > 0; j--)
            {
                arr[j] = arr[j - 1];
            }

            arr[0] = temp;
        }
    }
}