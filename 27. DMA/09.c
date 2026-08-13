// In question 5, define a method to dynamically create an array of pointers of type Student. Array size is received as an argument. Return the address of array.


#include <stdio.h>
#include <stdlib.h>

struct Student
{
    char name[50];
    int roll_no;
    char college_name[100];
};

struct Student **createStudentPointerArray(int size);

int main()
{
    int size;
    struct Student **students;

    printf("Enter size of array: ");
    scanf("%d", &size);

    students = createStudentPointerArray(size);

    printf("Array of Student pointers created successfully.\n");

    // Memory release
    free(students);

    return 0;
}

struct Student **createStudentPointerArray(int size)
{
    struct Student **ptr;

    ptr = malloc(size * sizeof(struct Student *));

    if(ptr == NULL)
    {
        printf("Memory allocation failed!\n");
        exit(1);
    }

    return ptr;
}