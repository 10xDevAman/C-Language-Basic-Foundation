// Program to find and display grade obtained by a student in a test. Grading specification are as follows:
/*
    -	Mark from 90 to 100 : Grade A
    -	Marks from 80 to less than 90 : Grade B
    -	Marks from 70 to less than 80 : Grade C
    -	Marks from 60 to less than 70 : Grade D
    -	Marks from 50 to less than 60 : Grade E
    -	Marks from 50 : Grade F
    -	Marks greater than 100 or less than 0 : Invalid Marks
*/


#include <stdio.h>

int main() {
    int marks;

    printf("Enter marks (0-100): ");
    scanf("%d", &marks);

    if (marks < 0 || marks > 100) {
        printf("Invalid Marks\n");
    }
    else if (marks >= 90) {
        printf("Grade A\n");
    }
    else if (marks >= 80) {
        printf("Grade B\n");
    }
    else if (marks >= 70) {
        printf("Grade C\n");
    }
    else if (marks >= 60) {
        printf("Grade D\n");
    }
    else if (marks >= 50) {
        printf("Grade E\n");
    }
    else {
        printf("Grade F\n");
    }

    return 0;
}