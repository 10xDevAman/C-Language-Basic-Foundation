// Write a program to draw below pattern.
/*

    1 2 3 4 3 2 1
    1 2 3   3 2 1
    1 2       2 1
    1           1

*/


#include <stdio.h>

int main() {
    int n = 4;
    int i, j;

    for (i = 0; i < n; i++) {

        if (i == 0) {

            for (j = 1; j <= n; j++)
                printf("%d ", j);

            for (j = n - 1; j >= 1; j--)
                printf("%d ", j);
        }
        else {

            for (j = 1; j <= n - i; j++)
                printf("%d ", j);

            for (j = 1; j <= 2 * i - 1; j++)
                printf("  ");

            for (j = n - i; j >= 1; j--)
                printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}