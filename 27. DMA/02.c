// Write a program to ask the user to input a number of data values he would like to enter then create an array dynamically to accommodate the data values. Now take the input from the user and display the average of data values.


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    float *arr;
    float sum = 0, average;

    printf("Enter number of data values: ");
    scanf("%d", &n);

    // Dynamically allocate memory
    arr = (float *)malloc(n * sizeof(float));

    if(arr == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input values
    printf("Enter %d data values:\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%f", arr + i);
        sum = sum + *(arr + i);
    }

    // Calculate average
    average = sum / n;

    printf("Average = %.2f\n", average);

    // Release allocated memory
    free(arr);

    return 0;
}