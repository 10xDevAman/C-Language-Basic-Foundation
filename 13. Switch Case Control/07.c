// Write a menu driven program with the following options:
/*
    1.	Factorial of a number 
    2.	Check Even and Odd
    3.	Area of Circle
    4.	Sum of first N natural numbers
    5.	Exit
*/


#include <stdio.h>

int main() {
    int choice, n, i;
    long long fact;
    float radius;

    do {
        printf("\n===== MENU =====\n");
        printf("1. Factorial of a Number\n");
        printf("2. Check Even and Odd\n");
        printf("3. Area of Circle\n");
        printf("4. Sum of First N Natural Numbers\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("Enter a number: ");
                scanf("%d", &n);

                if (n < 0) {
                    printf("Factorial is not defined for negative numbers.\n");
                } else {
                    fact = 1;
                    for (i = 1; i <= n; i++) {
                        fact *= i;
                    }
                    printf("Factorial = %lld\n", fact);
                }
                break;

            case 2:
                printf("Enter a number: ");
                scanf("%d", &n);

                if (n % 2 == 0)
                    printf("%d is Even.\n", n);
                else
                    printf("%d is Odd.\n", n);

                break;

            case 3:
                printf("Enter the radius: ");
                scanf("%f", &radius);

                if (radius < 0) {
                    printf("Radius cannot be negative.\n");
                } else {
                    printf("Area of Circle = %.2f\n", 3.14159 * radius * radius);
                }
                break;

            case 4:
                printf("Enter the value of N: ");
                scanf("%d", &n);

                if (n < 0) {
                    printf("N must be non-negative.\n");
                } else {
                    printf("Sum = %d\n", n * (n + 1) / 2);
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