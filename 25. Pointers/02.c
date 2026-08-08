// Write a function to search all occurrence of a given character in a given string. Result of search is a list of indices to be stored in the given array. [ void search_all_occurrences (char *str, char ch, int *arr); ]


#include <stdio.h>

void search_all_occurrences(char *str, char ch, int *arr);

int main()
{
    char str[100];
    char ch;
    int arr[100];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter character to search: ");
    scanf("%c", &ch);

    search_all_occurrences(str, ch, arr);

    printf("Occurrences found at indices: ");

    for(i = 0; arr[i] != -1; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

void search_all_occurrences(char *str, char ch, int *arr)
{
    int i = 0;
    int j = 0;

    while(*(str + i) != '\0')
    {
        if(*(str + i) == ch)
        {
            *(arr + j) = i;
            j++;
        }

        i++;
    }

    *(arr + j) = -1;
}