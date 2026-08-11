// Write a program to store information of n students and display them using structure.


#include <stdio.h>
#include <stdlib.h>

struct Student
{
    int rollNo;
    char name[50];
    float marks;
};

int main()
{
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Dynamically allocate memory for n students
    struct Student *students = malloc(n * sizeof(struct Student));

    if(students == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input student information
    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Student %d:\n", i + 1);

        printf("Roll No: ");
        scanf("%d", &(students + i)->rollNo);

        printf("Name: ");
        scanf(" %[^\n]", (students + i)->name);

        printf("Marks: ");
        scanf("%f", &(students + i)->marks);
    }

    // Display student information
    printf("\n========== Student Information ==========\n");

    for(i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Roll No : %d\n", (students + i)->rollNo);
        printf("Name    : %s\n", (students + i)->name);
        printf("Marks   : %.2f\n", (students + i)->marks);
    }

    free(students);

    return 0;
}