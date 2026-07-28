// Write a function to check whether a given number is even or odd . Return 1 if the number is even, otherwise return 0. (TSRS)

#include <stdio.h>

int isEven(int num);

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (isEven(n))
        printf("%d is Even.\n", n);
    else
        printf("%d is Odd.\n", n);

    return 0;
}

int isEven(int num) {
    if (num % 2 == 0)
        return 1;
    else
        return 0;
}