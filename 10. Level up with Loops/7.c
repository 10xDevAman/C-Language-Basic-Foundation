// Write a program to print all Prime numbers between two given numbers

#include <stdio.h>
int main() {
    int num1, num2, i, j, isPrime;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    printf("Prime numbers between %d and %d are: ", num1, num2);

    for(i = num1; i <= num2; i++) {
        if(i < 2) continue; // Skip numbers less than 2
        isPrime = 1;
        for(j = 2; j <= i / 2; j++) {
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