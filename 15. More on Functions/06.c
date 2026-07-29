// Write a function to print all Prime numbers between two given numbers. (TSRN)

#include <stdio.h>

int isPrime(int n);
void printPrimeBetween(int a, int b);

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printPrimeBetween(a, b);

    return 0;
}

int isPrime(int n) {
    int i;

    if (n <= 1)
        return 0;

    for (i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0;
    }

    return 1;
}

void printPrimeBetween(int a, int b) {
    int i;

    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    printf("Prime Numbers are:\n");

    for (i = a + 1; i < b; i++) {
        if (isPrime(i))
            printf("%d ", i);
    }

    printf("\n");
}