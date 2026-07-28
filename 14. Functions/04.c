// Write a function to print first N natural numbers. (TSRN)

#include <stdio.h>

void printNaturalNumbers(int n);

int main() {
    int n;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    printNaturalNumbers(n);

    return 0;
}

void printNaturalNumbers(int n) {
    int i;

    printf("First %d Natural Numbers are:\n", n);

    for (i = 1; i <= n; i++) {
        printf("%d ", i);
    }

    printf("\n");
}