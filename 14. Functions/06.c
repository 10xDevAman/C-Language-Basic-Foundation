// Write a function to calculate the factorial of a number. (TSRS)

#include <stdio.h>

long long factorial(int n);

int main() {
    int n;
    long long fact;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        fact = factorial(n);
        printf("Factorial = %lld\n", fact);
    }

    return 0;
}

long long factorial(int n) {
    int i;
    long long fact = 1;

    for (i = 1; i <= n; i++) {
        fact = fact * i;
    }

    return fact;
}