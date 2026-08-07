// Write a program to find the number of vowels in each of the 5 strings stored in two dimensional arrays, taken from the user.


#include <stdio.h>

int main()
{
    char str[5][100];
    int i, j, count;

    for(i = 0; i < 5; i++)
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

    printf("\nNumber of vowels in each string:\n");

    for(i = 0; i < 5; i++)
    {
        count = 0;

        for(j = 0; str[i][j] != '\0'; j++)
        {
            if(str[i][j] == 'a' || str[i][j] == 'e' ||
               str[i][j] == 'i' || str[i][j] == 'o' ||
               str[i][j] == 'u' || str[i][j] == 'A' ||
               str[i][j] == 'E' || str[i][j] == 'I' ||
               str[i][j] == 'O' || str[i][j] == 'U')
            {
                count++;
            }
        }

        printf("%s --> %d vowels\n", str[i], count);
    }

    return 0;
}