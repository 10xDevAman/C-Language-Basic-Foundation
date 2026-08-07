// Write a function to store all the words in a given string which are starting from ‘a’, in a two dimensional char array.


#include <stdio.h>

void storeWordsStartingWithA(char str[], char words[][50]);

int main()
{
    char str[200];
    char words[20][50];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    storeWordsStartingWithA(str, words);

    printf("\nWords starting with 'A' or 'a':\n");

    for(i = 0; words[i][0] != '\0'; i++)
    {
        printf("%s\n", words[i]);
    }

    return 0;
}

void storeWordsStartingWithA(char str[], char words[][50])
{
    int i = 0, j, k = 0;

    while(str[i] != '\0')
    {
        while(str[i] == ' ')
            i++;

        if(str[i] == '\0' || str[i] == '\n')
            break;

        if(str[i] == 'a' || str[i] == 'A')
        {
            j = 0;

            while(str[i] != ' ' &&
                  str[i] != '\0' &&
                  str[i] != '\n')
            {
                words[k][j++] = str[i++];
            }

            words[k][j] = '\0';
            k++;
        }
        else
        {
            while(str[i] != ' ' &&
                  str[i] != '\0' &&
                  str[i] != '\n')
            {
                i++;
            }
        }
    }

    words[k][0] = '\0';
}