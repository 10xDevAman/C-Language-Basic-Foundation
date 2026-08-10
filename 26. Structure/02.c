// Write a function to take input employee data from the user. [ Refer structure from question 1 ]


#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

void inputEmployee(struct Employee *e);

int main()
{
    struct Employee emp;

    inputEmployee(&emp);

    printf("\nEmployee Details:\n");
    printf("ID     : %d\n", emp.id);
    printf("Name   : %s", emp.name);
    printf("Salary : %.2f\n", emp.salary);

    return 0;
}

void inputEmployee(struct Employee *e)
{
    printf("Enter Employee ID: ");
    scanf("%d", &e->id);

    getchar();  // Remove newline

    printf("Enter Employee Name: ");
    fgets(e->name, sizeof(e->name), stdin);

    printf("Enter Employee Salary: ");
    scanf("%f", &e->salary);
}