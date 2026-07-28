// Write a function to print all prime factors of a given number. For example, if the number is 36 then your result should be 2,2,3,3. (TSRN)

#include <stdio.h>

// Function Declaration
void printPrimeFactors(int n);

// Main Function
int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1)
        printf("No Prime Factors.\n");
    else
        printPrimeFactors(n);

    return 0;
}

// Function Definition
void printPrimeFactors(int n) {
    int i;

    printf("Prime Factors are: ");

    for (i = 2; i <= n; i++) {
        while (n % i == 0) {
            printf("%d ", i);
            n = n / i;
        }
    }

    printf("\n");
}

// Optimized Version

/*
        void printPrimeFactors(int n) {
            int i;

            printf("Prime Factors are: ");

            while (n % 2 == 0) {
                printf("%d ", 2);
                n /= 2;
            }

            for (i = 3; i * i <= n; i += 2) {
                while (n % i == 0) {
                    printf("%d ", i);
                    n /= i;
                }
            }

            if (n > 2)
                printf("%d", n);

            printf("\n");
        }
*/