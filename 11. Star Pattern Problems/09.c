// Write a program to draw below pattern : 
/*
    ABCDE
     BCDE
      CDE
       DE
        E
*/

#include <stdio.h>
int main() {
    int i, j, k;
    for(i = 0; i < 5; i++) {
        for(j = 0; j < i; j++) {
            printf(" ");
        }
        for(k = i; k < 5; k++) {
            printf("%c", 'A' + k);
        }
        printf("\n");
    }
    return 0;
}