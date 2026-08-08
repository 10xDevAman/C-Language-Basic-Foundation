// Write a function to convert a given string into uppercase.

#include <stdio.h>

void toUpperCase(char *str);

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    toUpperCase(str);

    printf("Uppercase String: %s", str);

    return 0;
}

void toUpperCase(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }

        str++;
    }
}