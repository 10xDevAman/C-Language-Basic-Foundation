// Write a program to store information of n students and display them using structure Physics ( each out of 100 ) using a structure named Marks having elements roll no., name, chem_marks, mark_marks and phy_marks and then display the percentage of each student.


#include <stdio.h>
#include <stdlib.h>

struct Marks
{
    int roll_no;
    char name[50];
    float chem_marks;
    float math_marks;
    float phy_marks;
};

int main()
{
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Marks *student;

    // Memory allocation
    student = malloc(n * sizeof(struct Marks));

    if(student == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input student information
    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Student %d:\n", i + 1);

        printf("Roll No: ");
        scanf("%d", &(student + i)->roll_no);

        printf("Name: ");
        scanf(" %[^\n]", (student + i)->name);

        printf("Chemistry Marks: ");
        scanf("%f", &(student + i)->chem_marks);

        printf("Mathematics Marks: ");
        scanf("%f", &(student + i)->math_marks);

        printf("Physics Marks: ");
        scanf("%f", &(student + i)->phy_marks);
    }

    // Display information and percentage
    printf("\n========== Student Details ==========\n");

    for(i = 0; i < n; i++)
    {
        float percentage;

        percentage = (
            (student + i)->chem_marks +
            (student + i)->math_marks +
            (student + i)->phy_marks
        ) / 3;

        printf("\nStudent %d\n", i + 1);
        printf("Roll No      : %d\n", (student + i)->roll_no);
        printf("Name         : %s\n", (student + i)->name);
        printf("Chemistry    : %.2f\n", (student + i)->chem_marks);
        printf("Mathematics  : %.2f\n", (student + i)->math_marks);
        printf("Physics      : %.2f\n", (student + i)->phy_marks);
        printf("Percentage   : %.2f%%\n", percentage);
    }

    // Release memory
    free(student);

    return 0;
}