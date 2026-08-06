// Write a function to trim a string ( removing leading spaces from both the ends )

#include <stdio.h>

void trim(char str[]);

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    trim(str);

    printf("Trimmed String: \"%s\"\n", str);

    return 0;
}

void trim(char str[])
{
    int i = 0, j = 0, length = 0;

    // Remove newline added by fgets()
    while(str[length] != '\0')
        length++;

    if(str[length - 1] == '\n')
    {
        str[length - 1] = '\0';
        length--;
    }

    // Skip leading spaces
    while(str[i] == ' ')
        i++;

    // Shift characters to the beginning
    while(str[i] != '\0')
    {
        str[j] = str[i];
        i++;
        j++;
    }
    str[j] = '\0';

    length = 0;
    while(str[length] != '\0')
        length++;

    while(length > 0 && str[length - 1] == ' ')
    {
        str[length - 1] = '\0';
        length--;
    }
}