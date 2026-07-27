// Write a menu driven program with the following options:
/*
    1.	Calculate LCM of the two numbers
    2.	Calculate sum of the digits of a number
    3.	Volume of a cuboid
    4.	Check whether a given number is Prime or not
    5.	Exit
*/

#include <stdio.h>

int main() {
    int choice;
    int a, b, n, temp, sum, i;
    int length, width, height;

    do {
        printf("\n===== MENU =====\n");
        printf("1. Calculate LCM of Two Numbers\n");
        printf("2. Calculate Sum of Digits\n");
        printf("3. Volume of a Cuboid\n");
        printf("4. Check Prime Number\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);

                temp = (a > b) ? a : b;

                while (1) {
                    if (temp % a == 0 && temp % b == 0) {
                        printf("LCM = %d\n", temp);
                        break;
                    }
                    temp++;
                }
                break;

            case 2:
                printf("Enter a number: ");
                scanf("%d", &n);

                sum = 0;
                while (n != 0) {
                    sum += n % 10;
                    n /= 10;
                }

                printf("Sum of Digits = %d\n", sum);
                break;

            case 3:
                printf("Enter length, width and height: ");
                scanf("%d %d %d", &length, &width, &height);

                printf("Volume of Cuboid = %d\n", length * width * height);
                break;

            case 4:
                printf("Enter a number: ");
                scanf("%d", &n);

                if (n <= 1) {
                    printf("%d is NOT a Prime Number.\n", n);
                } else {
                    for (i = 2; i < n; i++) {
                        if (n % i == 0)
                            break;
                    }

                    if (i == n)
                        printf("%d is a Prime Number.\n", n);
                    else
                        printf("%d is NOT a Prime Number.\n", n);
                }
                break;

            case 5:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice! Please enter a number between 1 and 5.\n");
        }

    } while (choice != 5);

    return 0;
}