// Write a function to find the next prime number of a given number. (TSRS)

#include <stdio.h>

int isPrime(int n);
int nextPrime(int n);

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Next Prime Number = %d\n", nextPrime(n));

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

int nextPrime(int n) {

    while (1) {
        n++;

        if (isPrime(n))
            return n;
    }
}