// Write a function to store each word a string in a 2 dimensional char array.


#include <stdio.h>

void storeWords(char str[], char words[][50]);

int main()
{
    char str[100];
    char words[20][50];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    storeWords(str, words);

    printf("\nStored Words:\n");

    for(i = 0; words[i][0] != '\0'; i++)
    {
        printf("%s\n", words[i]);
    }

    return 0;
}

void storeWords(char str[], char words[][50])
{
    int i = 0, j = 0, k = 0;

    while(str[i] != '\0')
    {
        while(str[i] == ' ')
            i++;

        if(str[i] == '\n' || str[i] == '\0')
            break;

        j = 0;

        while(str[i] != ' ' &&
              str[i] != '\0' &&
              str[i] != '\n')
        {
            words[k][j] = str[i];
            i++;
            j++;
        }

        words[k][j] = '\0';
        k++;
    }

    words[k][0] = '\0';
}