// Define a structure Student with name, roll number and collage name as members. Define another structure Team with two Student type variables as members.


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

int main()
{
    struct Team team;

    return 0;
}