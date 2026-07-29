// Write a function to print first N terms of Fibonacci series. (TSRN)


#include <stdio.h>

void printFibonacci(int n);

int main() {
    int n;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printFibonacci(n);

    return 0;
}

void printFibonacci(int n) {
    int a = 0, b = 1, next, i;

    for (i = 1; i <= n; i++) {
        printf("%d ", a);

        next = a + b;
        a = b;
        b = next;
    }

    printf("\n");
}