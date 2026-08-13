// In question 5, define a method to display data of Student type, also define a method to display data of Team type.


#include <stdio.h>

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

void displayStudent(struct Student *student);
void displayTeam(struct Team *team);

int main()
{
    struct Student student =
    {
        "Aman",
        101,
        "ABC College"
    };

    struct Team team =
    {
        {
            "Aman",
            101,
            "ABC College"
        },
        {
            "Rahul",
            102,
            "XYZ College"
        }
    };

    printf("----- Student Data -----\n");
    displayStudent(&student);

    printf("\n----- Team Data -----\n");
    displayTeam(&team);

    return 0;
}

void displayStudent(struct Student *student)
{
    printf("Name    : %s\n", student->name);
    printf("Roll No : %d\n", student->roll_no);
    printf("College : %s\n", student->college_name);
}

void displayTeam(struct Team *team)
{
    printf("\nStudent 1:\n");
    displayStudent(&team->student1);

    printf("\nStudent 2:\n");
    displayStudent(&team->student2);
}