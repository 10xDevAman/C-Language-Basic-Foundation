// Write a program to print greater between two numbers. Print one number if both are the same.

#include<stdio.h>
int main()
{
    int num1, num2;
    printf("Enter two number : ");
    scanf("%d %d", &num1 , &num2);

    if( num1 > num2 )
        printf("%d is greater.", num1);
    else if( num2 > num1 )
        printf("%d is greater.", num2);
    else
        printf("Both numbers are same that is %d.", num1);
    return 0;
}
