// Write a function to find character in a given string between specified indices start index ( inclusive ) and end index ( exclusive ).

#include <stdio.h>

int findCharacter(char str[], char ch, int start, int end);

int main()
{
    char str[100], ch;
    int start, end, index;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter character to search: ");
    scanf(" %c", &ch);

    printf("Enter start index: ");
    scanf("%d", &start);

    printf("Enter end index: ");
    scanf("%d", &end);

    index = findCharacter(str, ch, start, end);

    if(index == -1)
        printf("Character not found.\n");
    else
        printf("Character found at index %d\n", index);

    return 0;
}

int findCharacter(char str[], char ch, int start, int end)
{
    int i;

    for(i = start; i < end && str[i] != '\0'; i++)
    {
        if(str[i] == ch)
            return i;
    }

    return -1;
}