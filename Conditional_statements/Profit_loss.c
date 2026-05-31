#include <stdio.h>

int main()
{
    // program to find profit and loss
    float cost_price, selling_price;
    printf("cost price: ");
    scanf("%f", &cost_price);

    printf("selling price: ");
    scanf("%f", &selling_price);

    float profit, loss;
    profit = selling_price - cost_price;
    loss = cost_price - selling_price;

    if (selling_price > cost_price)
    {
        printf("profit of: %.2f", profit);
    }
    else if (cost_price > selling_price)
    {
        printf("loss of: %.2f", loss);
    }
    else
    // cost_price == selling_price
    {
        printf("no loss and no profit");
    }
    return 0;
}