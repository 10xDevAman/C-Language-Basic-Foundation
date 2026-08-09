// Write a function to swap strings of two char arrays.


#include <stdio.h>

void swapStrings(char *str1, char *str2);

int main()
{
    char str1[100], str2[100];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    printf("\nBefore swapping:\n");
    printf("str1 = %s", str1);
    printf("str2 = %s", str2);

    swapStrings(str1, str2);

    printf("\nAfter swapping:\n");
    printf("str1 = %s", str1);
    printf("str2 = %s", str2);

    return 0;
}

void swapStrings(char *str1, char *str2)
{
    char temp;

    while(*str1 != '\0' || *str2 != '\0')
    {
        temp = *str1;
        *str1 = *str2;
        *str2 = temp;

        str1++;
        str2++;
    }
}