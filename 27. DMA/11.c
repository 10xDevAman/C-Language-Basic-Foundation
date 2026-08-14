// In question 5, define a driver function to create 6 Student and 3 Teams. Form teams by assigning two students in each team. At last display the list of teams with students in them.


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
    char name[50];
    int roll_no;
    char college_name[100];
};

struct Team
{
    struct Student *student1;
    struct Student *student2;
};

// Function to create a Student
struct Student* createStudent(char name[], int roll_no, char college_name[])
{
    struct Student *student;

    student = malloc(sizeof(struct Student));

    if(student == NULL)
    {
        printf("Memory allocation failed!\n");
        exit(1);
    }

    strcpy(student->name, name);
    student->roll_no = roll_no;
    strcpy(student->college_name, college_name);

    return student;
}

// Function to create a Team
struct Team* createTeam(struct Student *s1, struct Student *s2)
{
    struct Team *team;

    team = malloc(sizeof(struct Team));

    if(team == NULL)
    {
        printf("Memory allocation failed!\n");
        exit(1);
    }

    team->student1 = s1;
    team->student2 = s2;

    return team;
}

// Display Student
void displayStudent(struct Student *student)
{
    printf("Name    : %s\n", student->name);
    printf("Roll No : %d\n", student->roll_no);
    printf("College : %s\n", student->college_name);
}

// Display Team
void displayTeam(struct Team *team)
{
    printf("\nStudent 1:\n");
    displayStudent(team->student1);

    printf("\nStudent 2:\n");
    displayStudent(team->student2);
}

// Driver function
void run()
{
    struct Student *students[6];
    struct Team *teams[3];

    // Create 6 Students
    students[0] = createStudent(
        "Aman", 101, "ABC College"
    );

    students[1] = createStudent(
        "Rahul", 102, "XYZ College"
    );

    students[2] = createStudent(
        "Mohit", 103, "ABC College"
    );

    students[3] = createStudent(
        "Ravi", 104, "PQR College"
    );

    students[4] = createStudent(
        "Ankit", 105, "XYZ College"
    );

    students[5] = createStudent(
        "Vikas", 106, "PQR College"
    );

    // Create 3 Teams
    teams[0] = createTeam(students[0], students[1]);
    teams[1] = createTeam(students[2], students[3]);
    teams[2] = createTeam(students[4], students[5]);

    // Display Teams
    printf("\n========== TEAM LIST ==========\n");

    for(int i = 0; i < 3; i++)
    {
        printf("\nTeam %d\n", i + 1);
        printf("--------------------\n");

        displayTeam(teams[i]);
    }

    // Free Team memory
    for(int i = 0; i < 3; i++)
    {
        free(teams[i]);
    }

    // Free Student memory
    for(int i = 0; i < 6; i++)
    {
        free(students[i]);
    }
}

int main()
{
    run();

    return 0;
}