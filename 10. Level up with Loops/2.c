// Write a program to print first N terms of Fibonacci series.


#include <stdio.h>

int main() {
    int number, first = 0, second = 1, next, c;

    printf("Enter the number of terms in Fibonacci series: ");
    scanf("%d", &number);

    if (number <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        printf("First %d terms of Fibonacci series are:\n", number);
        for (c = 1; c <= number; c++) {
            if (c == 1) {
                printf("%d ", first);
            } else if (c == 2) {
                printf("%d ", second);
            } else {
                next = first + second;
                printf("%d ", next);
                first = second;
                second = next;
            }
        }
        printf("\n");
    }

    return 0;
}