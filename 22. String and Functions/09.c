// Write a function to swap two characters of a given string with specified indices.


#include <stdio.h>

void swapCharacters(char str[], int index1, int index2);

int main()
{
    char str[100];
    int index1, index2;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter first index: ");
    scanf("%d", &index1);

    printf("Enter second index: ");
    scanf("%d", &index2);

    swapCharacters(str, index1, index2);

    printf("Modified String: %s", str);

    return 0;
}

void swapCharacters(char str[], int index1, int index2)
{
    char temp;

    temp = str[index1];
    str[index1] = str[index2];
    str[index2] = temp;
}