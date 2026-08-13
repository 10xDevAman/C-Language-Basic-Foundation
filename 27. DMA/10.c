// In question 5, define a method to dynamically create an array of pointers of type Team. Array size is received as an argument. Return the address of array.


#include <stdio.h>
#include <stdlib.h>

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

struct Team **createTeamPointerArray(int size);

int main()
{
    int size;
    struct Team **teams;

    printf("Enter size of array: ");
    scanf("%d", &size);

    teams = createTeamPointerArray(size);

    printf("Array of Team pointers created successfully.\n");

    // Release memory
    free(teams);

    return 0;
}

struct Team **createTeamPointerArray(int size)
{
    struct Team **ptr;

    ptr = malloc(size * sizeof(struct Team *));

    if(ptr == NULL)
    {
        printf("Memory allocation failed!\n");
        exit(1);
    }

    return ptr;
}