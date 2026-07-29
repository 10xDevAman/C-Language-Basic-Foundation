// Write a function to calculate LCM of two numbers. (TSRS)


#include <stdio.h>

int lcm(int a, int b);

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("LCM = %d\n", lcm(a, b));

    return 0;
}

int lcm(int a, int b) {
    int max;

    max = (a > b) ? a : b;

    while (1) {
        if (max % a == 0 && max % b == 0)
            return max;

        max++;
    }
}



// Optimized Method

/*

        #include <stdio.h>

        int gcd(int a, int b) {
            while (b != 0) {
                int temp = b;
                b = a % b;
                a = temp;
            }
            return a;
        }

        int lcm(int a, int b) {
            return (a * b) / gcd(a, b);
        }

        int main() {
            int a, b;

            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);

            printf("LCM = %d\n", lcm(a, b));

            return 0;
        }

*/
