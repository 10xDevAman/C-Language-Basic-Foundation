// Write a program to print all Prime number under 100.

#include <stdio.h>

int main() {
    int i, j, isPrime;

    printf("Prime numbers under 100 are: ");

    for(i = 2; i < 100; i++) {
        isPrime = 1;
        for(j = 2; j < i; j++) {
            if(i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if(isPrime == 1) {
            printf("%d ", i);
        }
    }

    return 0;
}