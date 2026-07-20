// Write a program to check whether a given number is divisible by 5 or not.

#include<stdio.h>
int main(){
    int number;
    printf("Enter a number : ");
    scanf("%d", &number);
    if ( number % 5 )
        printf("%d is not divisibe by 5.", number);
    else
        printf("%d is divisible by 5.", number);
    return 0;
}