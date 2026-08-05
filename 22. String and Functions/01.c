// Write a function to calculate length of a string.

#include <stdio.h>

int stringLength(char str[]);

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Length of the string = %d\n", stringLength(str));

    return 0;
}

int stringLength(char str[])
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] == '\n')   // Ignore newline added by fgets()
            break;

        i++;
    }

    return i;
}