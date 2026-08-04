// Write a program to reverse a string.


#include <stdio.h>

int main()
{
    char str[100];
    int i = 0, start, end;
    char temp;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0')
    {
        i++;
    }

    if(str[i - 1] == '\n')
    {
        str[i - 1] = '\0';
        i--;
    }

    start = 0;
    end = i - 1;

    while(start < end)
    {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }

    printf("Reversed String: %s\n", str);

    return 0;
}