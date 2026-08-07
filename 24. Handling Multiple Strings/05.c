// Write a function to remove duplicate names stored in the lists of names stored in a 2d char array.


#include <stdio.h>

void removeDuplicateNames(char names[][50], int *n);

int main()
{
    char names[20][50];
    int n, i, j;

    printf("Enter number of names: ");
    scanf("%d", &n);
    getchar(); 

    for(i = 0; i < n; i++)
    {
        printf("Enter name %d: ", i + 1);
        fgets(names[i], sizeof(names[i]), stdin);

        for(j = 0; names[i][j] != '\0'; j++)
        {
            if(names[i][j] == '\n')
            {
                names[i][j] = '\0';
                break;
            }
        }
    }

    removeDuplicateNames(names, &n);

    printf("\nNames after removing duplicates:\n");
    for(i = 0; i < n; i++)
        printf("%s\n", names[i]);

    return 0;
}

void removeDuplicateNames(char names[][50], int *n)
{
    int i, j, k, l;
    int same;

    for(i = 0; i < *n - 1; i++)
    {
        for(j = i + 1; j < *n; j++)
        {
            k = 0;
            same = 1;

            while(names[i][k] != '\0' || names[j][k] != '\0')
            {
                if(names[i][k] != names[j][k])
                {
                    same = 0;
                    break;
                }
                k++;
            }

            if(same)
            {
                for(l = j; l < *n - 1; l++)
                {
                    k = 0;
                    while(names[l + 1][k] != '\0')
                    {
                        names[l][k] = names[l + 1][k];
                        k++;
                    }
                    names[l][k] = '\0';
                }

                (*n)--;
                j--;
            }
        }
    }
}