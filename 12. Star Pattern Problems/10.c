// Write a program to draw below pattern.
/*

    A B C D C B A
    A B C   C B A
    A B       B A
    A           A

*/

#include <stdio.h>

int main() {
    int n = 4;
    int i, j;

    for (i = 0; i < n; i++) {

        if (i == 0) {

            for (j = 0; j < n; j++)
                printf("%c ", 'A' + j);

            for (j = n - 2; j >= 0; j--)
                printf("%c ", 'A' + j);
        }
        else {

            for (j = 0; j < n - i; j++)
                printf("%c ", 'A' + j);

            for (j = 0; j < 2 * i - 1; j++)
                printf("  ");

            for (j = n - i - 1; j >= 0; j--)
                printf("%c ", 'A' + j);
        }

        printf("\n");
    }

    return 0;
}