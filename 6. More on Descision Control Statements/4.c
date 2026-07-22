// Write a program to check whether a given alphabets is in uppercase or lowercase

#include <stdio.h>
int main()
{
    char character;
    printf("Enter an Alphabet : ");
    scanf("%c", &character);
    if (character <= 122 && character >= 97)
        printf("Alphabet is in Lower Case");
    else if (character <= 91 && character >= 65)
        printf("Alphabet is in Upper Case");
    else
        printf("Please enter a valid Alphabet");
    return 0;
}