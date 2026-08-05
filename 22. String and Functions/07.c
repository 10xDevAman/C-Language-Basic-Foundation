// Write a function to find a character in a given string. Return index of first occurrence of given character. Return -1 if character not found.

#include <stdio.h>

int findCharacter(char str[], char ch);

int main()
{
    char str[100], ch;
    int index;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter character to search: ");
    scanf(" %c", &ch);

    index = findCharacter(str, ch);

    if(index == -1)
        printf("Character not found.\n");
    else
        printf("First occurrence of '%c' is at index %d\n", ch, index);

    return 0;
}

int findCharacter(char str[], char ch)
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] == ch)
            return i;

        i++;
    }

    return -1;
}