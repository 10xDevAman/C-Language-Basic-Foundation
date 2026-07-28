// Write a function to calculate simple interest. (TSRS)

#include <stdio.h>

float simpleInterest(float principal, float rate, float time);

int main() {
    float p, r, t, si;

    printf("Enter Principal Amount: ");
    scanf("%f", &p);

    printf("Enter Rate of Interest: ");
    scanf("%f", &r);

    printf("Enter Time (in years): ");
    scanf("%f", &t);

    si = simpleInterest(p, r, t);

    printf("Simple Interest = %.2f\n", si);

    return 0;
}

float simpleInterest(float principal, float rate, float time) {
    return (principal * rate * time) / 100;
}