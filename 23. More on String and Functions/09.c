// Write a function to make acronym name from a given name. For example, “Ramesh Chand Tiwari” becomes “R C Tiwari”, “Bhavesh Gupta” becomes “B Gupta”


#include <stdio.h>

void makeAcronym(char str[]);

int main()
{
    char str[100];

    printf("Enter full name: ");
    fgets(str, sizeof(str), stdin);

    makeAcronym(str);

    return 0;
}

void makeAcronym(char str[])
{
    int i = 0, lastStart = 0;

    // Remove newline
    while(str[i] != '\0')
    {
        if(str[i] == '\n')
        {
            str[i] = '\0';
            break;
        }
        i++;
    }

    // Find starting index of last word
    i = 0;
    while(str[i] != '\0')
    {
        if(str[i] == ' ' && str[i + 1] != '\0')
            lastStart = i + 1;

        i++;
    }

    // Print initials of all words except last
    i = 0;

    while(i < lastStart)
    {
        if(i == 0 || str[i - 1] == ' ')
        {
            printf("%c ", str[i]);
        }

        i++;
    }

    // Print last name
    while(str[lastStart] != '\0')
    {
        printf("%c", str[lastStart]);
        lastStart++;
    }

    printf("\n");
}