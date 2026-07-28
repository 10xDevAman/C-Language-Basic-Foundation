// Write a function to check whether a given number contains a given digit or not. (TSRS)

#include <stdio.h>

// Function Declaration
int containsDigit(int num, int digit);

// Main Function
int main() {
    int num, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter the digit to search: ");
    scanf("%d", &digit);

    if (digit < 0 || digit > 9) {
        printf("Invalid Digit! Enter a digit between 0 and 9.\n");
    }
    else if (containsDigit(num, digit))
        printf("Digit %d is present in %d.\n", digit, num);
    else
        printf("Digit %d is NOT present in %d.\n", digit, num);

    return 0;
}

// Function Definition
int containsDigit(int num, int digit) {

    if (num < 0)
        num = -num;      // Handle negative numbers

    while (num != 0) {
        if (num % 10 == digit)
            return 1;

        num /= 10;
    }

    return 0;
}