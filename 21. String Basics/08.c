// Write a program in C to count the total number of alphabets, digits and special characters in a string.


#include <stdio.h>

int main()
{
    char str[100];
    int i = 0;
    int alphabets = 0, digits = 0, special = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0')
    {
        if((str[i] >= 'A' && str[i] <= 'Z') ||
           (str[i] >= 'a' && str[i] <= 'z'))
        {
            alphabets++;
        }
        else if(str[i] >= '0' && str[i] <= '9')
        {
            digits++;
        }
        else if(str[i] != '\n')
        {
            special++;
        }

        i++;
    }

    printf("\nTotal Alphabets = %d\n", alphabets);
    printf("Total Digits = %d\n", digits);
    printf("Total Special Characters = %d\n", special);

    return 0;
}