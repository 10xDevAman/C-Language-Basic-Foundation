// Write a program to draw below pattern.
/*
    ABCDCBA
     ABCBA
      ABA
       A

*/

#include <stdio.h>

int main() {
    int i, j;
    int n = 4;

    for (i = 0; i < n; i++) {

        for (j = 0; j < i; j++) {
            printf(" ");
        }

        for (char ch = 'A'; ch <= 'A' + (n - i - 1); ch++) {
            printf("%c", ch);
        }

        for (char ch = 'A' + (n - i - 2); ch >= 'A'; ch--) {
            printf("%c", ch);
        }

        printf("\n");
    }

    return 0;
}