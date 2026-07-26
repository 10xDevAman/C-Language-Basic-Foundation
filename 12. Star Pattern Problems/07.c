// Write a program to draw below pattern.
/*

    1
   1 1
  1 2 1
 1 2 2 1 
1 2 3 2 1

*/

#include <stdio.h>

int main() {
    int i, j;
    int n = 5;

    for (i = 1; i <= n; i++) {

        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        for (j = 1; j <= (i + 1) / 2; j++) {
            printf("%d ", j);
        }

        int start;
        if (i % 2 == 0)
            start = i / 2;
        else
            start = (i + 1) / 2 - 1;

        for (j = start; j >= 1; j--) {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}