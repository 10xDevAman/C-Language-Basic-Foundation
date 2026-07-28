// Write a function to calculate the number of arrangements one can make from n items and r selected at a time. (TSRS)

#include <stdio.h>

// Function to calculate factorial
long long factorial(int n) {
    long long fact = 1;
    int i;

    for (i = 1; i <= n; i++) {
        fact *= i;
    }

    return fact;
}

// Function to calculate nPr (TSRS)
long long arrangement(int n, int r) {
    return factorial(n) / factorial(n - r);
}

int main() {
    int n, r;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Enter the value of r: ");
    scanf("%d", &r);

    if (n < 0 || r < 0 || r > n) {
        printf("Invalid Input!\n");
    } else {
        printf("Number of Arrangements (nPr) = %lld\n", arrangement(n, r));
    }

    return 0;
}