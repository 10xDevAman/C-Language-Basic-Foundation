// Write a program to print the first 10 even natural numbers in reverse order.

#include<stdio.h>
int main()
{
    int i = 20;
    int count = 0;
    while(count < 10)
    {
        if(i % 2 == 0)
            printf("%d\n", i);
        i--;
    }
    return 0;
}