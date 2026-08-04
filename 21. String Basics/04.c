// Write a program to count spaces in a given string.


#include <stdio.h>

int main()
{
    char str[100];
    int i = 0, count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0')
    {
        if(str[i] == ' ')
            count++;

        i++;
    }

    printf("Total Spaces = %d\n", count);

    return 0;
}