// Write a function to find the highest salary employee from a given array of 10 employee [ Refer structure from question 1 ]

#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

struct Employee *highestSalary(struct Employee *e, int size);

int main()
{
    struct Employee emp[10];
    struct Employee *highest;
    int i;

    // Input
    for(i = 0; i < 10; i++)
    {
        printf("\nEnter details of Employee %d:\n", i + 1);

        printf("ID: ");
        scanf("%d", &emp[i].id);

        printf("Name: ");
        scanf(" %[^\n]", emp[i].name);

        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    highest = highestSalary(emp, 10);

    printf("\nHighest Salary Employee:\n");
    printf("ID     : %d\n", highest->id);
    printf("Name   : %s\n", highest->name);
    printf("Salary : %.2f\n", highest->salary);

    return 0;
}

struct Employee *highestSalary(struct Employee *e, int size)
{
    struct Employee *highest = e;
    int i;

    for(i = 1; i < size; i++)
    {
        if((e + i)->salary > highest->salary)
        {
            highest = e + i;
        }
    }

    return highest;
}