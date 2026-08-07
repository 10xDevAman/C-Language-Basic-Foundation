// Write a function to return the most repeating character in a list of strings.


#include <stdio.h>

char mostRepeatingChar(char str[][100], int n);

int main()
{
    char str[5][100];
    int i;

    for(i = 0; i < 5; i++)
    {
        printf("Enter string %d: ", i + 1);
        fgets(str[i], sizeof(str[i]), stdin);
    }

    printf("\nMost Repeating Character = %c\n",
           mostRepeatingChar(str, 5));

    return 0;
}

char mostRepeatingChar(char str[][100], int n)
{
    int freq[256] = {0};
    int i, j;
    int max = 0;
    char ch = '\0';

    for(i = 0; i < n; i++)
    {
        for(j = 0; str[i][j] != '\0'; j++)
        {
            if(str[i][j] != ' ' && str[i][j] != '\n')
            {
                freq[(unsigned char)str[i][j]]++;
            }
        }
    }

    for(i = 0; i < 256; i++)
    {
        if(freq[i] > max)
        {
            max = freq[i];
            ch = (char)i;
        }
    }

    return ch;
}