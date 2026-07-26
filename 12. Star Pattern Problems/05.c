// Write a program to draw below pattern.
/*
ABCDEFG
 ABCDE
  ABC
   A

*/

#include <stdio.h>
int main() {
    int i, j, k;
    int n = 4;

    for (i = n; i >= 1; i--) {
        for (j = n; j > i; j--) {
            printf(" ");
        }
        for (k = 0; k < (2 * i - 1); k++) {
            printf("%c", 'A' + k);
        }
        printf("\n");
    }

    return 0;
}