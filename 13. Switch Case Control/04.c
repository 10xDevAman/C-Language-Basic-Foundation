// Write a menu driven program with the following options:
/*
    1.	Check whether a given set of three numbers are lengths of an isosceles triangle or not.
    2.	Check whether a given set of three numbers are lengths of sides of a right angled triangle or not.
    3.	Check whether a given set of three numbers are equilateral triangle or not
    4.	Exit
*/

#include <stdio.h>

int main() {
    int choice;
    float a, b, c;

    do {
        printf("\n===== MENU =====\n");
        printf("1. Check Isosceles Triangle\n");
        printf("2. Check Right Angled Triangle\n");
        printf("3. Check Equilateral Triangle\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 3) {
            printf("Enter three sides: ");
            scanf("%f %f %f", &a, &b, &c);

            // Check whether a valid triangle can be formed
            if (a + b <= c || a + c <= b || b + c <= a) {
                printf("The given sides do not form a valid triangle.\n");
                continue;
            }
        }

        switch (choice) {

            case 1:
                if (a == b || b == c || a == c)
                    printf("It is an Isosceles Triangle.\n");
                else
                    printf("It is NOT an Isosceles Triangle.\n");
                break;

            case 2:
                if ((a*a + b*b == c*c) ||
                    (a*a + c*c == b*b) ||
                    (b*b + c*c == a*a))
                    printf("It is a Right Angled Triangle.\n");
                else
                    printf("It is NOT a Right Angled Triangle.\n");
                break;

            case 3:
                if (a == b && b == c)
                    printf("It is an Equilateral Triangle.\n");
                else
                    printf("It is NOT an Equilateral Triangle.\n");
                break;

            case 4:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice! Please enter 1 to 4.\n");
        }

    } while (choice != 4);

    return 0;
}