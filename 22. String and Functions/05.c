// Write a function to transform a string into lowercase.

#include <stdio.h>

void toLowerCase(char str[]);

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    toLowerCase(str);

    printf("Lowercase String: %s", str);

    return 0;
}

void toLowerCase(char str[])
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }

        i++;
    }
}