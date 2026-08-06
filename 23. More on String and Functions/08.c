// Write a function to make first character of each word of the string is capital.


#include <stdio.h>

void capitalizeWords(char str[]);

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    capitalizeWords(str);

    printf("Modified String: %s", str);

    return 0;
}

void capitalizeWords(char str[])
{
    int i = 0;

    if(str[0] >= 'a' && str[0] <= 'z')
    {
        str[0] = str[0] - 32;
    }

    while(str[i] != '\0')
    {
        if(str[i] == ' ' &&
           str[i + 1] >= 'a' &&
           str[i + 1] <= 'z')
        {
            str[i + 1] = str[i + 1] - 32;
        }

        i++;
    }
}