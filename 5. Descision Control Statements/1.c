// Write a program to check whether a given number is positive or not.

#include <stdio.h>
int main(){
    int number;
    printf("Enter a number : ");
    scanf("%d", &number);
    if(number > 0)
        printf("%d is a positive number.", number);
    else
        printf("%d is not a positive number.", number);
    return 0;
}