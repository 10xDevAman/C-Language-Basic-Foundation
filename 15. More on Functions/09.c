// Write a function to print all Armstrong numbers between two given numbers. (TSRN)

#include <stdio.h>

int power(int base, int exp);
int countDigits(int n);
int isArmstrong(int n);
void printArmstrongBetween(int a, int b);

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printArmstrongBetween(a, b);

    return 0;
}

int power(int base, int exp) {
    int result = 1;

    while (exp--) {
        result *= base;
    }

    return result;
}

int countDigits(int n) {
    int count = 0;

    if (n == 0)
        return 1;

    while (n != 0) {
        count++;
        n /= 10;
    }

    return count;
}

int isArmstrong(int n) {
    int original = n;
    int digits = countDigits(n);
    int sum = 0;

    while (n != 0) {
        int digit = n % 10;
        sum += power(digit, digits);
        n /= 10;
    }

    return sum == original;
}

void printArmstrongBetween(int a, int b) {
    int i;

    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    printf("Armstrong Numbers are:\n");

    for (i = a; i <= b; i++) {
        if (isArmstrong(i))
            printf("%d ", i);
    }

    printf("\n");
}