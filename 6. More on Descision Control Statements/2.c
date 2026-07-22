// Write a program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage.

#include <stdio.h>
int main()
{
    int cp, sp;
    float profitPercent;
    printf("Enter the cost price of your product : ");
    scanf("%d", &cp);
    printf("Enter selling price of your product: ");
    scanf("%d", &sp);

    profitPercent = ((sp - cp) * 100) / cp;
    // printf("%d %d %.2f", cp , sp, profitPercent);
    if (profitPercent > 0)
        printf("The Profit percent is %.2f", profitPercent);
    else
        printf("Loss of %.2f percent.", -profitPercent);
    return 0;
}