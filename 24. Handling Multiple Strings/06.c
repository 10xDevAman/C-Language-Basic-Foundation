// Write a program to find words ending with a letter ‘s’ and store each such word in a 2d char array.


#include <stdio.h>

int main()
{
    char str[200];
    char words[20][50];
    char temp[50];
    int i = 0, j = 0, k = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0')
    {
        while(str[i] == ' ')
            i++;

        if(str[i] == '\0' || str[i] == '\n')
            break;

        j = 0;

        while(str[i] != ' ' &&
              str[i] != '\0' &&
              str[i] != '\n')
        {
            temp[j++] = str[i++];
        }

        temp[j] = '\0';

        if(j > 0 && (temp[j - 1] == 's' || temp[j - 1] == 'S'))
        {
            int l = 0;

            while(temp[l] != '\0')
            {
                words[k][l] = temp[l];
                l++;
            }

            words[k][l] = '\0';
            k++;
        }
    }

    printf("\nWords ending with 's':\n");

    for(i = 0; i < k; i++)
    {
        printf("%s\n", words[i]);
    }

    return 0;
}