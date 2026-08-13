// In question 5, define a method to dynamically create a Student type variable and initialise with the values received in the arguments. Return address of Student type variable.


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
    char name[50];
    int roll_no;
    char college_name[100];
};

struct Student* createStudent(char name[], int roll_no, char college_name[]);

int main()
{
    struct Student *student;

    student = createStudent(
        "Aman",
        101,
        "ABC College"
    );

    printf("Student Details:\n");
    printf("Name    : %s\n", student->name);
    printf("Roll No : %d\n", student->roll_no);
    printf("College : %s\n", student->college_name);

    // Release dynamically allocated memory
    free(student);

    return 0;
}

struct Student* createStudent(char name[], int roll_no, char college_name[])
{
    struct Student *student;

    // Dynamically create Student
    student = malloc(sizeof(struct Student));

    if(student == NULL)
    {
        printf("Memory allocation failed!\n");
        exit(1);
    }

    // Initialize members
    strcpy(student->name, name);
    student->roll_no = roll_no;
    strcpy(student->college_name, college_name);

    return student;
}