// Write a function to print PASCAL Triangle. (TSRN)

#include <stdio.h>

long long combination(int n, int r);
void printPascalTriangle(int rows);

int main() {
    int rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printPascalTriangle(rows);

    return 0;
}

long long combination(int n, int r) {
    long long result = 1;
    int i;

    if (r > n - r)
        r = n - r;

    for (i = 0; i < r; i++) {
        result = result * (n - i);
        result = result / (i + 1);
    }

    return result;
}

void printPascalTriangle(int rows) {
    int i, j, k;

    for (i = 0; i < rows; i++) {

        for (k = 0; k < rows - i - 1; k++)
            printf("  ");

        for (j = 0; j <= i; j++)
            printf("%4lld", combination(i, j));

        printf("\n");
    }
}