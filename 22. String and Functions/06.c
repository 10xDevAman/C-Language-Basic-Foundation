// Write a function to count vowels in a given string.


#include <stdio.h>

int countVowels(char str[]);

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Total Vowels = %d\n", countVowels(str));

    return 0;
}

int countVowels(char str[])
{
    int i = 0, count = 0;

    while(str[i] != '\0')
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
           str[i] == 'o' || str[i] == 'u' ||
           str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
           str[i] == 'O' || str[i] == 'U')
        {
            count++;
        }

        i++;
    }

    return count;
}