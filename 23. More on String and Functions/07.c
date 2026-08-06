// Write a function to find a word in the given string.

#include <stdio.h>

int findWord(char str[], char word[]);

int main()
{
    char str[100], word[50];
    int index;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter word to search: ");
    scanf("%49s", word);

    index = findWord(str, word);

    if(index == -1)
        printf("Word not found.\n");
    else
        printf("Word found at index %d\n", index);

    return 0;
}

int findWord(char str[], char word[])
{
    int i, j;

    for(i = 0; str[i] != '\0'; i++)
    {
        for(j = 0; word[j] != '\0'; j++)
        {
            if(str[i + j] != word[j])
                break;
        }

        if(word[j] == '\0')
            return i;
    }

    return -1;
}