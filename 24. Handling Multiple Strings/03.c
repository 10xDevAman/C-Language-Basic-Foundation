// Write a program to sort 10 city names stored in two dimensional arrays, taken from the user.


#include <stdio.h>

int main()
{
    char city[10][50], temp[50];
    int i, j, k;

    // Input city names
    for(i = 0; i < 10; i++)
    {
        printf("Enter city %d: ", i + 1);
        fgets(city[i], sizeof(city[i]), stdin);

        // Remove newline character
        for(j = 0; city[i][j] != '\0'; j++)
        {
            if(city[i][j] == '\n')
            {
                city[i][j] = '\0';
                break;
            }
        }
    }

    // Sort city names
    for(i = 0; i < 9; i++)
    {
        for(j = i + 1; j < 10; j++)
        {
            k = 0;

            while(city[i][k] == city[j][k] &&
                  city[i][k] != '\0' &&
                  city[j][k] != '\0')
            {
                k++;
            }

            if(city[i][k] > city[j][k])
            {
                // Swap strings
                k = 0;
                while(city[i][k] != '\0' || city[j][k] != '\0')
                {
                    temp[k] = city[i][k];
                    city[i][k] = city[j][k];
                    city[j][k] = temp[k];
                    k++;
                }

                temp[k] = city[i][k];
                city[i][k] = city[j][k];
                city[j][k] = temp[k];
            }
        }
    }

    printf("\nCities in Alphabetical Order:\n");

    for(i = 0; i < 10; i++)
    {
        printf("%s\n", city[i]);
    }

    return 0;
}