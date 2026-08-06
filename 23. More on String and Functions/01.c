// Write a function to check whether a given string is palindrome or not.

#include <stdio.h>

int isPalindrome(char str[]);

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    if(isPalindrome(str))
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}

int isPalindrome(char str[])
{
    int length = 0;
    int start, end;

    // Find length
    while(str[length] != '\0')
        length++;

    // Remove newline if present
    if(str[length - 1] == '\n')
        length--;

    start = 0;
    end = length - 1;

    while(start < end)
    {
        if(str[start] != str[end])
            return 0;

        start++;
        end--;
    }

    return 1;
}