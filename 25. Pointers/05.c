// Write a function to extract a substring from a given string with specified start index (inclusive) and end index (exclusive), and store the extracted string in another char array. [ void extract_string( char *str, int start_index, int end_index, char *result); ]

#include <stdio.h>

void extract_string(char *str, int start_index,
                    int end_index, char *result);

int main()
{
    char str[100];
    char result[100];
    int start_index, end_index;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter start index: ");
    scanf("%d", &start_index);

    printf("Enter end index: ");
    scanf("%d", &end_index);

    extract_string(str, start_index, end_index, result);

    printf("Extracted string: %s\n", result);

    return 0;
}

void extract_string(char *str, int start_index,
                    int end_index, char *result)
{
    int i = 0;

    str = str + start_index;

    while(start_index < end_index)
    {
        *(result + i) = *str;

        i++;
        str++;
        start_index++;
    }

    *(result + i) = '\0';
}