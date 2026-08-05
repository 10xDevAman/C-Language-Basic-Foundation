// Write a function to reverse a string.


#include <stdio.h>

void reverseString(char str[]);

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    reverseString(str);

    printf("Reversed String: %s\n", str);

    return 0;
}

void reverseString(char str[])
{
    int i = 0;
    int start, end;
    char temp;

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
}