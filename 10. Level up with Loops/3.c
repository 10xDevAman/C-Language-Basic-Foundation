// Write a program to check whether a given number is there in the Fibonacci series or not.

#include<stdio.h>
int main()
{
    int number, first = 0, second = 1, next = 0, found = 0;

    printf("Enter a number to check in Fibonacci series: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Please enter a non-negative integer.\n");
    } else {
        while (next < number) {
            next = first + second;
            first = second;
            second = next;
        }
        if (next == number || number == 0) {
            found = 1;
        }

        if (found) {
            printf("%d is present in the Fibonacci series.\n", number);
        } else {
            printf("%d is not present in the Fibonacci series.\n", number);
        }
    }

    return 0;
}