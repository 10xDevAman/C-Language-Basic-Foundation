// Write a program to calculate the length of the string.(without using built in method)

#include <stdio.h>

int main()
{
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0')
    {
        if(str[i] == '\n')   // Ignore newline added by fgets
            break;

        i++;
    }

    printf("Length of the string = %d\n", i);

    return 0;
}