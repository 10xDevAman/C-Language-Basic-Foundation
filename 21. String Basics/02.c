// Write a program to count the occurrence of a given character in a given string.

#include <stdio.h>

int main()
{
    char str[100], ch;
    int i = 0, count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter a character: ");
    scanf(" %c", &ch);

    while(str[i] != '\0')
    {
        if(str[i] == ch)
            count++;

        i++;
    }

    printf("'%c' occurs %d time(s).\n", ch, count);

    return 0;
}