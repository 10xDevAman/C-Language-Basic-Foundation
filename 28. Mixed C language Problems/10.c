// Define a function to create an array of size N and store first N prime numbers in it. Return the resulting array.


#include <stdio.h>
#include <stdlib.h>

int isPrime(int num)
{
    int i;

    if(num < 2)
        return 0;

    for(i = 2; i * i <= num; i++)
    {
        if(num % i == 0)
            return 0;
    }

    return 1;
}

int* createPrimeArray(int n)
{
    int *arr;
    int count = 0;
    int num = 2;

    arr = malloc(n * sizeof(int));

    if(arr == NULL)
    {
        printf("Memory allocation failed!\n");
        exit(1);
    }

    while(count < n)
    {
        if(isPrime(num))
        {
            arr[count] = num;
            count++;
        }

        num++;
    }

    return arr;
}

int main()
{
    int n, i;
    int *arr;

    printf("Enter N: ");
    scanf("%d", &n);

    arr = createPrimeArray(n);

    printf("First %d prime numbers:\n", n);

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    free(arr);

    return 0;
}