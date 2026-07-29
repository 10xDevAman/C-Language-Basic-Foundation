// Write a function to check whether a given number is Prime or not. (TSRS)

#include <stdio.h>

int isPrime(int n);

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (isPrime(n))
        printf("%d is a Prime Number.\n", n);
    else
        printf("%d is NOT a Prime Number.\n", n);

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


// Simpler Method

/*

        int isPrime(int n) {
            int i;

            if (n <= 1)
                return 0;

            for (i = 2; i < n; i++) {
                if (n % i == 0)
                    return 0;
            }

            return 1;
        }

*/