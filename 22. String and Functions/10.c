// Write a function to check whether a given string is an alphanumeric string or not. (Alphanumeric string must contain at least one alphabet and one digit )


#include <stdio.h>

int isAlphanumeric(char str[]);

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    if(isAlphanumeric(str))
        printf("The string is alphanumeric.\n");
    else
        printf("The string is not alphanumeric.\n");

    return 0;
}

int isAlphanumeric(char str[])
{
    int i = 0;
    int hasAlphabet = 0, hasDigit = 0;

    while(str[i] != '\0')
    {
        if((str[i] >= 'A' && str[i] <= 'Z') ||
           (str[i] >= 'a' && str[i] <= 'z'))
        {
            hasAlphabet = 1;
        }
        else if(str[i] >= '0' && str[i] <= '9')
        {
            hasDigit = 1;
        }

        i++;
    }

    return (hasAlphabet && hasDigit);
}