// Write a function to do case insensitive comparison of two strings.


#include <stdio.h>

int compareIgnoreCase(char str1[], char str2[]);

int main()
{
    char str1[100], str2[100];

    printf("Enter first string: ");
    scanf("%99s", str1);

    printf("Enter second string: ");
    scanf("%99s", str2);

    if(compareIgnoreCase(str1, str2) == 0)
        printf("Both strings are equal (case-insensitive).\n");
    else
        printf("Both strings are different.\n");

    return 0;
}

int compareIgnoreCase(char str1[], char str2[])
{
    int i = 0;
    char ch1, ch2;

    while(str1[i] != '\0' || str2[i] != '\0')
    {
        ch1 = str1[i];
        ch2 = str2[i];

        if(ch1 >= 'A' && ch1 <= 'Z')
            ch1 = ch1 + 32;

        if(ch2 >= 'A' && ch2 <= 'Z')
            ch2 = ch2 + 32;

        if(ch1 != ch2)
            return 1;

        i++;
    }

    return 0;
}