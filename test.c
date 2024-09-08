#include <stdio.h>

enum flavors {vanilla, chocolate, mint strawberry};

int main()
{
    float corner1Sales[4];
    float corner2Sales[4];

    float totalSales[4] = {0};

    printf("Enter sales for corner 1: \n");
    for (enum flavors i = vailla; i <= strawberry; i++)
    {
        scanf("%f", &corner1Sales[i]);
    }
        printf("Enter sales for corner 2: \n");
    for (enum flavors i = vailla; i <= strawberry; i++)
    {
        scanf("%f", &corner2Sales[i]);
    }

    float grandTotal = 0;
    for (enum flavors i = vanilla; i <= strawberry; i++)
    {
        totalSales[i] = corner1Sales[i] + corner2Sales[i];
        grandTotal += totalSales[i]
    }
    printf("\nThe total sales per flavor:\n");
    printf("Vanilla: $%.2f\n", totalSales[vanilla]);
    printf("Chocolate: $%.2f\n", totalSales[chocolate]);
    printf("Mint: $%.2f\n", totalSales[mint]);
    printf("Strawberry: $%.2f\n", totalSales[strawberry]);



}