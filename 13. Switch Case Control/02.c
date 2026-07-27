/*
Write a menu driven program with the following options:
    1.	Addition 
    2.	Subtraction
    3.	Multiplication
    4.	Division 
    5.	Exit
*/

#include <stdio.h>

int main() {
    int choice;
    float num1, num2;

    do {
        printf("\n===== MENU =====\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                printf("Sum = %.2f\n", num1 + num2);
                break;

            case 2:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                printf("Difference = %.2f\n", num1 - num2);
                break;

            case 3:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                printf("Product = %.2f\n", num1 * num2);
                break;

            case 4:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);

                if (num2 != 0)
                    printf("Quotient = %.2f\n", num1 / num2);
                else
                    printf("Error! Division by zero is not allowed.\n");

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