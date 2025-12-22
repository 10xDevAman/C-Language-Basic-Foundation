// Write a program to ask users about the cost price and selling price banana per dozen. Calculate the profit and loss earned upon selling 25 banana.

#include<stdio.h>
int main()
{
   float cost_price_per_dozen, selling_price_per_dozen;
    float cost_price_per_banana, selling_price_per_banana;
    float total_cost, total_revenue, profit_loss;
    
    // Input cost price and selling price per dozen
    printf("Enter cost price per dozen (Rs.): ");
    scanf("%f", &cost_price_per_dozen);
    
    printf("Enter selling price per dozen (Rs.): ");
    scanf("%f", &selling_price_per_dozen);
    
    // Calculate per banana price
    cost_price_per_banana = cost_price_per_dozen / 12;
    selling_price_per_banana = selling_price_per_dozen / 12;
    
    // Calculate total cost and revenue for 25 bananas
    total_cost = 25 * cost_price_per_banana;
    total_revenue = 25 * selling_price_per_banana;
    
    // Calculate profit or loss
    profit_loss = total_revenue - total_cost;
   
    if (profit_loss > 0) {
        printf("Profit: Rs. %.2f\n", profit_loss);
    } else if (profit_loss < 0) {
        printf("Loss: Rs. %.2f\n", -profit_loss); // Convert to positive for loss amount
    } else {
        printf("No profit, no loss.\n");
    }
    
    return 0;
}