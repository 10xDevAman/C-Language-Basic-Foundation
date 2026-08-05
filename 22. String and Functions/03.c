// Write a function to compare two strings.


#include <stdio.h>

int compareString(char str1[], char str2[]);

int main()
{
    char str1[100], str2[100];

    printf("Enter first string: ");
    scanf("%99s", str1);

    printf("Enter second string: ");
    scanf("%99s", str2);

    if(compareString(str1, str2) == 0)
        printf("Both strings are equal.\n");
    else
        printf("Both strings are different.\n");

    return 0;
}

int compareString(char str1[], char str2[])
{
    int i = 0;

    while(str1[i] != '\0' || str2[i] != '\0')
    {
        if(str1[i] != str2[i])
            return 1;

        i++;
    }

    return 0;
}