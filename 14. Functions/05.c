// Write a function to print first N odd natural numbers. (TSRN)


#include <stdio.h>

void printOddNumbers(int n);

int main() {
    int n;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    printOddNumbers(n);

    return 0;
}

void printOddNumbers(int n) {
    int i;

    printf("First %d Odd Natural Numbers are:\n", n);

    for (i = 1; i <= n; i++) {
        printf("%d ", 2 * i - 1);
    }

    printf("\n");
}