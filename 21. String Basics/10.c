// Write a program to find first occurrence of a given character in a given string.


#include <stdio.h>

int main()
{
    char str[100], ch;
    int i = 0, found = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter character to search: ");
    scanf(" %c", &ch);

    while(str[i] != '\0')
    {
        if(str[i] == ch)
        {
            printf("First occurrence of '%c' is at index %d\n", ch, i);
            found = 1;
            break;
        }

        i++;
    }

    if(found == 0)
    {
        printf("Character not found.\n");
    }

    return 0;
}