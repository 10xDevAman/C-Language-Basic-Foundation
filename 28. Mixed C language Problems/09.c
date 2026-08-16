// Define a function to find the maximum frequency element in the given array.


#include <stdio.h>

int maxFrequencyElement(int *arr, int size)
{
    int i, j;
    int count, maxCount = 0;
    int element = arr[0];

    for(i = 0; i < size; i++)
    {
        count = 0;

        for(j = 0; j < size; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
            }
        }

        if(count > maxCount)
        {
            maxCount = count;
            element = arr[i];
        }
    }

    return element;
}

int main()
{
    int arr[] = {10, 20, 10, 30, 20, 10, 40};
    int size = 7;

    printf("Maximum frequency element = %d\n",
           maxFrequencyElement(arr, size));

    return 0;
}