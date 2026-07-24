// Write a program to check whether two given numbers are co-prime numbers or not.


#include<stdio.h>
int main()
{
    int num1, num2, hcf, i;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    int min = (num1 < num2) ? num1 : num2;

    for(i = 1; i <= min; i++) {
        if(num1 % i == 0 && num2 % i == 0) {
            hcf = i;
        }
    }

    if(hcf == 1) {
        printf("%d and %d are co-prime numbers.\n", num1, num2);
    } else {
        printf("%d and %d are not co-prime numbers.\n", num1, num2);
    }

    return 0;
}