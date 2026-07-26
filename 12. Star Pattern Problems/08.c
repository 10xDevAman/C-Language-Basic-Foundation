// Write a program to draw below pattern.
/*

    * * * * * * *
    * * *   * * *
    * *       * *
    *           *
*/

#include <stdio.h>

int main() {
    int n = 4;
    int i, j;

    for (i = 0; i < n; i++) {

        if (i == 0) {

            for (j = 0; j < 2 * n - 1; j++) {
                printf("* ");
            }
        } else {


            for (j = 0; j < n - i; j++) {
                printf("* ");
            }


            for (j = 0; j < 2 * i - 1; j++) {
                printf("  ");
            }


            for (j = 0; j < n - i; j++) {
                printf("* ");
            }
        }

        printf("\n");
    }

    return 0;
}