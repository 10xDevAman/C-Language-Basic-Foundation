// Write a program to input a character from user and print its ASCII code.

#include<stdio.h>
int main()
{
    char character;
    printf("Enter a character : ");
    scanf("%c", &character);

    printf("The ASCII code corresponds to %c is %d.", character, character);
    return 0;
}