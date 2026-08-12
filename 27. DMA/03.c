// Write a program to calculate the sum of n numbers entered by the user using malloc and free.


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    int *ptr;
    int sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Dynamically allocate memory
    ptr = (int *)malloc(n * sizeof(int));

    if(ptr == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d numbers:\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);
    }

    // Calculate sum
    for(i = 0; i < n; i++)
    {
        sum = sum + *(ptr + i);
    }

    printf("Sum = %d\n", sum);

    // Release allocated memory
    free(ptr);

    return 0;
}