// In question 5, define a method to dynamically create Team variable, initialise it with the received arguments. Return address of the Team variable.


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
    struct Student student1;
    struct Student student2;
};

struct Team* createTeam(
    char name1[], int roll_no1, char college1[],
    char name2[], int roll_no2, char college2[]
);

int main()
{
    struct Team *team;

    team = createTeam(
        "Aman", 101, "ABC College",
        "Rahul", 102, "XYZ College"
    );

    printf("Student 1:\n");
    printf("Name    : %s\n", team->student1.name);
    printf("Roll No : %d\n", team->student1.roll_no);
    printf("College : %s\n", team->student1.college_name);

    printf("\nStudent 2:\n");
    printf("Name    : %s\n", team->student2.name);
    printf("Roll No : %d\n", team->student2.roll_no);
    printf("College : %s\n", team->student2.college_name);

    // Release dynamically allocated memory
    free(team);

    return 0;
}

struct Team* createTeam(
    char name1[], int roll_no1, char college1[],
    char name2[], int roll_no2, char college2[]
)
{
    struct Team *team;

    // Dynamically create Team
    team = malloc(sizeof(struct Team));

    if(team == NULL)
    {
        printf("Memory allocation failed!\n");
        exit(1);
    }

    // Initialize first student
    strcpy(team->student1.name, name1);
    team->student1.roll_no = roll_no1;
    strcpy(team->student1.college_name, college1);

    // Initialize second student
    strcpy(team->student2.name, name2);
    team->student2.roll_no = roll_no2;
    strcpy(team->student2.college_name, college2);

    return team;
}