// Write a program to check whether a given number is an Armstrong number or not.

#include <stdio.h>
#include <math.h>

int isArmstrong(int n) {
    int original = n;
    int sum = 0;
    int digits = 0;
    int temp = n;


    while(temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = n;
    while(temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    return sum == original;
}

int main() {
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if(isArmstrong(num)) {
        printf("%d is an Armstrong number.", num);
    } else {
        printf("%d is not an Armstrong number.", num);
    }

    return 0;
}   