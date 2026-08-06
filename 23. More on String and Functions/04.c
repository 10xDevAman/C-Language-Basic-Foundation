// Write a function to reverse a string word wise, ( For example if the given string is “Mysirg Education Services” then the resulting string should be “Services Education Mysirg” )


#include <stdio.h>

void reverse(char str[], int start, int end);
void reverseWordWise(char str[]);

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    reverseWordWise(str);

    printf("Result: %s\n", str);

    return 0;
}

void reverse(char str[], int start, int end)
{
    char temp;

    while(start < end)
    {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
}

void reverseWordWise(char str[])
{
    int len = 0;
    int start = 0, end;

    while(str[len] != '\0')
        len++;

    if(str[len - 1] == '\n')
    {
        str[len - 1] = '\0';
        len--;
    }

    reverse(str, 0, len - 1);

    start = 0;

    while(str[start] != '\0')
    {
        while(str[start] == ' ')
            start++;

        end = start;

        while(str[end] != ' ' && str[end] != '\0')
            end++;

        reverse(str, start, end - 1);

        start = end;
    }
}