// Write a function to sort employees according to their salaries [refer structure from question 1 ]

#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

void sortEmployees(struct Employee *e, int size);
void displayEmployees(struct Employee *e, int size);

int main()
{
    struct Employee emp[5];
    int i;

    // Input employee data
    for(i = 0; i < 5; i++)
    {
        printf("\nEnter details of Employee %d:\n", i + 1);

        printf("ID: ");
        scanf("%d", &emp[i].id);

        printf("Name: ");
        scanf(" %[^\n]", emp[i].name);

        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    sortEmployees(emp, 5);

    printf("\nEmployees sorted according to salary:\n");
    displayEmployees(emp, 5);

    return 0;
}

void sortEmployees(struct Employee *e, int size)
{
    int i, j;
    struct Employee temp;

    for(i = 0; i < size - 1; i++)
    {
        for(j = 0; j < size - 1 - i; j++)
        {
            if((e + j)->salary > (e + j + 1)->salary)
            {
                temp = *(e + j);
                *(e + j) = *(e + j + 1);
                *(e + j + 1) = temp;
            }
        }
    }
}

void displayEmployees(struct Employee *e, int size)
{
    int i;

    for(i = 0; i < size; i++)
    {
        printf("\nID: %d", (e + i)->id);
        printf("\nName: %s", (e + i)->name);
        printf("\nSalary: %.2f\n", (e + i)->salary);
    }
}