// Write a program to calculate Simple Interest.

#include<stdio.h>
int main()
{
    int principal;
    float rate, time, si;
    printf("Enter Principal, Rate and Time(in year) to calculate SI :");
    scanf(" %d %f %f", &principal, &rate, &time);
    si = principal * rate * time / 100.0;
    printf("SI(P:Rs.%d R:%.2f%% T:%.1fyears) = %.2f.", principal, rate, time, si);
    return 0;
}