#include <stdio.h>

int main() {
    int quantity;
    float price, total;

    // Input quantity and price
    printf("Enter quantity purchased: ");
    scanf("%d", &quantity);

    printf("Enter price per item: ");
    scanf("%f", &price);

    // Calculate total expense
    total = quantity * price;

    // Apply 10% discount if quantity > 1000
    if (quantity > 1000) {
        total = total - (0.10 * total);
    }

    // Display result
    printf("Total expenses = %.2f\n", total);

    return 0;
}