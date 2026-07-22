// Write a program to print the first 10 odd natural numbers.

#include<stdio.h>   
int main()
{
    int i = 1;
    while(i <= 20)
    {
        if(i % 2 != 0)
            printf("%d\n", i);
        i++;
    }
    return 0;
}   