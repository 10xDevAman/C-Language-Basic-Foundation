// Write a function to concatenate two strings.


#include <stdio.h>

void concatenate(char str1[], char str2[]);

int main()
{
    char str1[200], str2[100];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    concatenate(str1, str2);

    printf("Concatenated String: %s\n", str1);

    return 0;
}


void concatenate(char str1[], char str2[])
{
    int i = 0, j = 0;

    // Find end of first string
    while(str1[i] != '\0')
    {
        if(str1[i] == '\n')
        {
            str1[i] = '\0';
            break;
        }
        i++;
    }

    // Copy second string
    while(str2[j] != '\0')
    {
        if(str2[j] == '\n')
        {
            j++;
            continue;
        }

        str1[i] = str2[j];
        i++;
        j++;
    }

    str1[i] = '\0';
}