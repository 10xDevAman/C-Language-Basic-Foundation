// Write a function to check whether a pair of strings are anagram or not. Both the strings are stored in a 2d char array.


#include <stdio.h>

int isAnagram(char str[][100]);

int main()
{
    char str[2][100];
    int i, j;

    for(i = 0; i < 2; i++)
    {
        printf("Enter string %d: ", i + 1);
        fgets(str[i], sizeof(str[i]), stdin);

        for(j = 0; str[i][j] != '\0'; j++)
        {
            if(str[i][j] == '\n')
            {
                str[i][j] = '\0';
                break;
            }
        }
    }

    if(isAnagram(str))
        printf("\nStrings are Anagrams.\n");
    else
        printf("\nStrings are Not Anagrams.\n");

    return 0;
}

int isAnagram(char str[][100])
{
    int freq[256] = {0};
    int i;

    for(i = 0; str[0][i] != '\0'; i++)
    {
        char ch = str[0][i];

        if(ch >= 'A' && ch <= 'Z')
            ch += 32;

        if(ch != ' ')
            freq[(unsigned char)ch]++;
    }

    for(i = 0; str[1][i] != '\0'; i++)
    {
        char ch = str[1][i];

        if(ch >= 'A' && ch <= 'Z')
            ch += 32;

        if(ch != ' ')
            freq[(unsigned char)ch]--;
    }

    for(i = 0; i < 256; i++)
    {
        if(freq[i] != 0)
            return 0;
    }

    return 1;
}