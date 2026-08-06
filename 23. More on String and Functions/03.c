// Write a function to count words in a given string.


#include <stdio.h>

int countWords(char str[]);

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Total Words = %d\n", countWords(str));

    return 0;
}

int countWords(char str[])
{
    int i = 0, count = 0;

    while(str[i] != '\0')
    {
        if(str[i] != ' ' &&
           str[i] != '\n' &&
           (i == 0 || str[i - 1] == ' '))
        {
            count++;
        }

        i++;
    }

    return count;
}