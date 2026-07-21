// Write a program to find the greatest among three given numbers. Print numbers once if the greatest number appears two or three times

#include<stdio.h>
int main()
{
    int number1, number2, number3;
    int n;
    printf("Enter three number : ");
    scanf("%d %d %d", &number1, &number2, &number3);
    
    int greatest = max(number1, max(number2, number3)); // find greatest in one line

    if (number1 == number2 && number2 == number3) {
        printf("All three numbers are the same: " , number1);
    } 
    else if ((number1 == number2 && number1 == greatest) || 
             (number1 == number3 && number1 == greatest) || 
             (number2 == number3 && number2 == greatest)) 
    {
        printf("Two numbers are the same and greatest: ", greatest);
    } 
    else {
        printf("Greatest number: ", greatest);
    }
    return 0;
}