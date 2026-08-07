// A 2d array is full with 10 email ids. Write function to find how many of them belongs to gmail.com

#include <stdio.h>

int countGmail(char email[][100], int n);

int main()
{
    char email[10][100];
    int i, j;

    for(i = 0; i < 10; i++)
    {
        printf("Enter Email %d: ", i + 1);
        fgets(email[i], sizeof(email[i]), stdin);

        for(j = 0; email[i][j] != '\0'; j++)
        {
            if(email[i][j] == '\n')
            {
                email[i][j] = '\0';
                break;
            }
        }
    }

    printf("\nTotal Gmail IDs = %d\n", countGmail(email, 10));

    return 0;
}

int countGmail(char email[][100], int n)
{
    int i, j, k, count = 0;
    char domain[] = "gmail.com";

    for(i = 0; i < n; i++)
    {
        j = 0;

        while(email[i][j] != '@' && email[i][j] != '\0')
            j++;

        if(email[i][j] == '@')
        {
            j++;
            k = 0;

            while(domain[k] != '\0' &&
                  email[i][j] != '\0' &&
                  email[i][j] == domain[k])
            {
                j++;
                k++;
            }

            if(domain[k] == '\0' && email[i][j] == '\0')
                count++;
        }
    }

    return count;
}