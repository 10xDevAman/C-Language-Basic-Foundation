// Write a program to check whether a given character is uppercase alphabet or lower case alphabet or some other special character, Using switch case statement.

#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    switch (ch) {

        case '0': case '1': case '2': case '3': case '4':
        case '5': case '6': case '7': case '8': case '9':
            printf("It is a Digit.\n");
            break;

        default:
            if (ch >= 'A' && ch <= 'Z')
                printf("It is an Uppercase Alphabet.\n");
            else if (ch >= 'a' && ch <= 'z')
                printf("It is a Lowercase Alphabet.\n");
            else
                printf("It is a Special Character.\n");
    }

    return 0;
}