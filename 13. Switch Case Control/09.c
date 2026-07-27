// Write a program to check whether a given character is vowel or constant or some other special character, Using switch case statement.

#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    switch (ch) {

        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':

        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("It is a Vowel.\n");
            break;

        default:
            if ((ch >= 'A' && ch <= 'Z') ||
                (ch >= 'a' && ch <= 'z'))
                printf("It is a Consonant.\n");
            else
                printf("It is a Special Character.\n");
    }

    return 0;
}