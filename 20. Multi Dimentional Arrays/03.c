// Write a program to print the transpose of a given matrix.


#include <stdio.h>

int main()
{
    int A[3][3];
    int i, j;

    printf("Enter elements of Matrix (3x3):\n");

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nTranspose of Matrix:\n");

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d ", A[j][i]);
        }
        printf("\n");
    }

    return 0;
}