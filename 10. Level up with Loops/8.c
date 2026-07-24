// Write a program to find the next prime number of a given number.

#include <stdio.h>

int isPrime(int n) {
    int i;
    if(n < 2) return 0;
    for(i = 2; i <= n / 2; i++) {
        if(n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int num, nextPrime;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    nextPrime = num + 1;
    while(!isPrime(nextPrime)) {
        nextPrime++;
    }

    printf("The next prime number after %d is %d", num, nextPrime);

    return 0;
}
