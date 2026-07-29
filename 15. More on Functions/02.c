// Write a function to calculate HCF of two numbers. (TSRS)

#include <stdio.h>

int hcf(int a, int b);

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("HCF = %d\n", hcf(a, b));

    return 0;
}

int hcf(int a, int b) {
    int i, min;

    min = (a < b) ? a : b;

    for (i = min; i >= 1; i--) {
        if (a % i == 0 && b % i == 0)
            return i;
    }

    return 1;
}


// Optimized Method

/*

        #include <stdio.h>

        int hcf(int a, int b) {
            while (b != 0) {
                int temp = b;
                b = a % b;
                a = temp;
            }

            return a;
        }

        int main() {
            int a, b;

            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);

            printf("HCF = %d\n", hcf(a, b));

            return 0;
        }

*/