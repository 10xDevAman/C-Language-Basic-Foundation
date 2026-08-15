// Write a function to print all distinct pattern of 0s and 1s of a given length.


#include <stdio.h>
#include <stdlib.h>

void generatePatterns(char *arr, int n, int index);

void generatePatterns(char *arr, int n, int index)
{
    // Pattern complete
    if(index == n)
    {
        arr[index] = '\0';
        printf("%s\n", arr);
        return;
    }

    // Put 0
    arr[index] = '0';
    generatePatterns(arr, n, index + 1);

    // Put 1
    arr[index] = '1';
    generatePatterns(arr, n, index + 1);
}

int main()
{
    int n;

    printf("Enter length: ");
    scanf("%d", &n);

    char *arr = malloc((n + 1) * sizeof(char));

    if(arr == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("\nAll patterns:\n");

    generatePatterns(arr, n, 0);

    free(arr);

    return 0;
}