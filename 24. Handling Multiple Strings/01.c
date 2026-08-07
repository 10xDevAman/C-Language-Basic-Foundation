// Write a function to store strings, taken from user, to the given 2d char array.


#include <stdio.h>

void inputStrings(char str[][100], int n);

int main()
{
    char str[5][100];
    int i;

    inputStrings(str, 5);

    printf("\nStored Strings:\n");

    for(i = 0; i < 5; i++)
    {
        printf("%s\n", str[i]);
    }

    return 0;
}

void inputStrings(char str[][100], int n)
{
    int i, j;

    for(i = 0; i < n; i++)
    {
        printf("Enter string %d: ", i + 1);
        fgets(str[i], 100, stdin);

        for(j = 0; str[i][j] != '\0'; j++)
        {
            if(str[i][j] == '\n')
            {
                str[i][j] = '\0';
                break;
            }
        }
    }
}