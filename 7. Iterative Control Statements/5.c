// Write a program to print the first 10 odd natural numbers in reverse order.

#include<stdio.h>
int main()      
{
    int i = 19;
    while(i >= 1)
    {
        if(i % 2 != 0)
            printf("%d\n", i);
        i--;
    }
    return 0;
}