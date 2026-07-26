// Write a program to draw below pattern.
/*
* * * * * * *
  * * * * *
    * * *
      *
*/

#include <stdio.h>
int main() {
    int i, j, k;
    int n = 4;

    for (i = n; i >= 1; i--) {
        for (j = n; j > i; j--) {
            printf("  ");
        }
        for (k = 1; k <= (2 * i - 1); k++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}