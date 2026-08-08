// Write a function to convert a given string into lowercase.

#include <stdio.h>

void toLowerCase(char *str);

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    toLowerCase(str);

    printf("Lowercase String: %s", str);

    return 0;
}

void toLowerCase(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }

        str++;
    }
}