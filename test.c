#include <stdio.h>
#include <string.h>

enum flavors {vanilla, chocolate, mint, strawberry};

int main() {
    float corner1Sales[4];
    float corner2Sales[4];
    char flavorNames[4][22];

    for (enum flavors i = vanilla; i <= strawberry; i++) {
        printf("Enter ice cream flavor #%d: ", i + 1);
        fgets(flavorNames[i], sizeof(flavorNames[i]), stdin);
        size_t len = strlen(flavorNames[i]);
        if (len > 0 && flavorNames[i][len - 1] == '\n') {
            flavorNames[i][len - 1] = '\0';
        }
    }

    for (enum flavors i = vanilla; i <= strawberry; i++) {
        printf("Enter corner 1 sales of %s: ", flavorNames[i]);
        scanf("%f", &corner1Sales[i]);
    }

    for (enum flavors i = vanilla; i <= strawberry; i++) {
        printf("Enter corner 2 sales of %s: ", flavorNames[i]);
        scanf("%f", &corner2Sales[i]);
    }

    float totalSales[4] = {0}, grandTotal = 0;
    for (enum flavors i = vanilla; i <= strawberry; i++) {
        totalSales[i] = corner1Sales[i] + corner2Sales[i];
        grandTotal += totalSales[i];
    }

    for (enum flavors i = vanilla; i <= strawberry; i++) {
        printf("Total %s sales: %.2f\n", flavorNames[i], totalSales[i]);
    }

    printf("\nBob's Ice Cream total sales: %.2f\n", grandTotal);

    return 0;
}
