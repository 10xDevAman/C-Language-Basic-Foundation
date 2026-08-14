// Define a function to produce all the combinations of strings that can be made out of characters of a given string, selecting r at a time. Return a dynamically created array of strings holding all combinations.


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int combinationCount(int n, int r);
void generate(char *str, int n, int r, int start,
              char *current, int pos,
              char **result, int *index);

char** combinations(char *str, int r, int *count)
{
    int n = strlen(str);
    int i;
    char **result;
    char *current;

    // Invalid input
    if(r < 0 || r > n)
    {
        *count = 0;
        return NULL;
    }

    // Total number of combinations
    *count = combinationCount(n, r);

    // Create array of string pointers
    result = malloc((*count) * sizeof(char *));

    if(result == NULL)
    {
        printf("Memory allocation failed!\n");
        exit(1);
    }

    // Allocate temporary string
    current = malloc((r + 1) * sizeof(char));

    if(current == NULL)
    {
        printf("Memory allocation failed!\n");
        free(result);
        exit(1);
    }

    // Generate combinations
    int index = 0;

    generate(str, n, r, 0, current, 0, result, &index);

    free(current);

    return result;
}

int combinationCount(int n, int r)
{
    int i;
    int result = 1;

    if(r > n - r)
        r = n - r;

    for(i = 1; i <= r; i++)
    {
        result = result * (n - r + i) / i;
    }

    return result;
}

void generate(char *str, int n, int r, int start,
              char *current, int pos,
              char **result, int *index)
{
    int i;

    // Combination complete
    if(pos == r)
    {
        current[pos] = '\0';

        // Allocate exact memory for this string
        result[*index] = malloc((r + 1) * sizeof(char));

        if(result[*index] == NULL)
        {
            printf("Memory allocation failed!\n");
            exit(1);
        }

        strcpy(result[*index], current);

        (*index)++;

        return;
    }

    // Select characters
    for(i = start; i <= n - (r - pos); i++)
    {
        current[pos] = str[i];

        generate(
            str,
            n,
            r,
            i + 1,
            current,
            pos + 1,
            result,
            index
        );
    }
}

int main()
{
    char str[100];
    int r, count, i;

    printf("Enter string: ");
    scanf("%99s", str);

    printf("Enter r: ");
    scanf("%d", &r);

    char **result = combinations(str, r, &count);

    if(result == NULL)
    {
        printf("Invalid value of r.\n");
        return 1;
    }

    printf("\nCombinations:\n");

    for(i = 0; i < count; i++)
    {
        printf("%s\n", result[i]);
    }

    // Free every dynamically created string
    for(i = 0; i < count; i++)
    {
        free(result[i]);
    }

    // Free array of pointers
    free(result);

    return 0;
}