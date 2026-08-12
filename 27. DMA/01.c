// Define a function to input a variable length string and store it in an array without memory wastage.

#include <stdio.h>
#include <stdlib.h>

char* inputString();

int main()
{
    char *str;

    str = inputString();

    printf("Entered String: %s\n", str);

    free(str);

    return 0;
}

char* inputString()
{
    char ch;
    int size = 0;
    char *str = NULL;

    // Read characters one by one
    while(1)
    {
        ch = getchar();

        if(ch == '\n')
            break;

        // Increase memory by 1 character
        str = realloc(str, (size + 1) * sizeof(char));

        if(str == NULL)
        {
            printf("Memory allocation failed!\n");
            exit(1);
        }

        *(str + size) = ch;
        size++;
    }

    // Allocate space for '\0'
    str = realloc(str, (size + 1) * sizeof(char));

    if(str == NULL)
    {
        printf("Memory allocation failed!\n");
        exit(1);
    }

    *(str + size) = '\0';

    return str;
}