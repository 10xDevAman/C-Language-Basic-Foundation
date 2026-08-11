// Write a program to store information of 10 students and display them using structure.


#include <stdio.h>

struct Student
{
    int rollNo;
    char name[50];
    float marks;
};

int main()
{
    struct Student students[10];
    int i;

    // Input student information
    for(i = 0; i < 10; i++)
    {
        printf("\nEnter details of Student %d:\n", i + 1);

        printf("Roll No: ");
        scanf("%d", &students[i].rollNo);

        printf("Name: ");
        scanf(" %[^\n]", students[i].name);

        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Display student information
    printf("\n========== Student Information ==========\n");

    for(i = 0; i < 10; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Roll No : %d\n", students[i].rollNo);
        printf("Name    : %s\n", students[i].name);
        printf("Marks   : %.2f\n", students[i].marks);
    }

    return 0;
}