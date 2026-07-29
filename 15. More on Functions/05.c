// Write a function to print first N prime numbers. (TSRS)

#include <stdio.h>

int isPrime(int n);
void printFirstNPrimes(int n);

int main() {
    int n;

    printf("Enter N: ");
    scanf("%d", &n);

    printFirstNPrimes(n);

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

void printFirstNPrimes(int n) {
    int count = 0, num = 2;

    printf("First %d Prime Numbers are:\n", n);

    while (count < n) {
        if (isPrime(num)) {
            printf("%d ", num);
            count++;
        }
        num++;
    }

    printf("\n");
}