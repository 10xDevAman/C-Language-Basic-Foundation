// Write a function to count frequency of each character of the given string.


#include <stdio.h>

void countFrequency(char str[]);

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    countFrequency(str);

    return 0;
}

void countFrequency(char str[])
{
    int i, j, count;
    int visited[100] = {0};

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == '\n')
            break;

        if(visited[i] == 1)
            continue;

        count = 1;

        for(j = i + 1; str[j] != '\0'; j++)
        {
            if(str[i] == str[j])
            {
                count++;
                visited[j] = 1;
            }
        }

        printf("%c : %d\n", str[i], count);
    }
}