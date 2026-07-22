// Write a program to print the first 10 even natural numbers.

#include<stdio.h>   
int main()
{
    int i = 2;
    int count = 0;
    while(count < 10)
    {
        printf("%d\n", i);
        i += 2;
        count++;
    }
    return 0;
}