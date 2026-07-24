// Write a program to print all Armstrong numbers under 1000.


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
    printf("Armstrong numbers under 1000 are:\n");
    for(int i = 1; i < 1000; i++) {
        if(isArmstrong(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}   