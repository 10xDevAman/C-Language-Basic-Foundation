// Write a program to check whether a given character is an alphabet (uppercase), an alphabet (lower case), a digit or a special character.

#include <stdio.h>
int main()
{
    char character;
    printf("Enter a Character : ");
    scanf("%c", &character);
    if (character <= 122 && character >= 97)
        printf("Your Character is an Alphabet in Lower Case.");
    else if (character <= 91 && character >= 65)
        printf("Your Character is an Alphabet in Upper Case.");
    else if (character <= 57 && character >= 48)
        printf("Your character is a Digit.");
    else
        printf("Your character is a special character.");
    return 0;
}