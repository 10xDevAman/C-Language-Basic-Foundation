// Write a program to input an ASCII code from the user and print its corresponding character.

#include<stdio.h>
int main()
{
    int ASCII;
    printf("Enter an ASCII character : ");
    scanf(" %d", &ASCII);

    printf("\'%c\' corresponds to %d code.", ASCII, ASCII);
    return 0;
}