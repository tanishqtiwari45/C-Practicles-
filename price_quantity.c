#include <stdio.h>

int main() {
    float price;
    int quantity;
    float total;
    printf("Enter the price of the product: ");
    scanf("%f", &price);
    printf("Enter the quantity to purchase: ");
    scanf("%d", &quantity);
    total = price * quantity;

    printf("Total price for %d units is: %.2f\n", quantity, total);

    return 0;
}
