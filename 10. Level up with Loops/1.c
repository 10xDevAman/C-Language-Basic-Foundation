// Write a program to find Nth term of the Fibonacci series.

#include<stdio.h>
int main()
{
    int n, first = 0, second = 1, next, c;

    printf("Enter the position of the term in Fibonacci series: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    } else if (n == 1) {
        printf("The %dth term in Fibonacci series is: %d\n", n, first);
    } else if (n == 2) {
        printf("The %dth term in Fibonacci series is: %d\n", n, second);
    } else {
        for (c = 3; c <= n; c++) {
            next = first + second;
            first = second;
            second = next;
        }
        printf("The %dth term in Fibonacci series is: %d\n", n, next);
    }

    return 0;
}