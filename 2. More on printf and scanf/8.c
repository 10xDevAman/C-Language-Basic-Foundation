// Write a program to input three characters from the user and display characters with their corresponding ASCII codes.

#include <stdio.h>
int main()
{
    char character1, character2, character3;
    printf("Enter three characters : ");
    scanf("%c %c %c", &character1, &character2, &character3);
    printf("%c ---- %d\n", character1, character1);
    printf("%c ---- %d\n", character2, character2);
    printf("%c ---- %d\n", character3, character3);
    return 0;
}