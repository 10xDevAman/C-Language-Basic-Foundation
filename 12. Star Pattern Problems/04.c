// Write a program to draw below pattern.
/*
      1
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1

*/

#include <stdio.h>
int main() {
    int i, j, k;
    int n = 4;

    for (i = 1; i <= n; i++) {
        for (j = n; j > i; j--) {
            printf("  ");
        }
        for (k = 1; k <= (2 * i - 1); k++) {
            if (k <= i) {
                printf("%d ", k);
            } else {
                printf("%d ", 2 * i - k);
            }
        }
        printf("\n");
    }

    return 0;
}