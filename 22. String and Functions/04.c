// Write a function to transform string into uppercase.


#include <stdio.h>

void toUpperCase(char str[]);

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    toUpperCase(str);

    printf("Uppercase String: %s", str);

    return 0;
}

void toUpperCase(char str[])
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }

        i++;
    }
}