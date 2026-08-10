// Write a function to display employee data. [ Refer structure from question 1]


#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

void displayEmployee(struct Employee *e);

int main()
{
    struct Employee emp = {101, "Aman Shah", 50000};

    displayEmployee(&emp);

    return 0;
}

void displayEmployee(struct Employee *e)
{
    printf("Employee Details:\n");
    printf("ID     : %d\n", e->id);
    printf("Name   : %s", e->name);
    printf("Salary : %.2f\n", e->salary);
}