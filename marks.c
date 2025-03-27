/* Read book name , author name, price, quantity. Offer 20% discount to price computed and print net price*/

#include <stdio.h>

int main() {
    char bookName[100], authorName[100];
    float price, netPrice;
    int quantity;

    // Input book details
    printf("Enter the book name: ");
    fgets(bookName, sizeof(bookName), stdin);

    printf("Enter the author name: ");
    fgets(authorName, sizeof(authorName), stdin);

    printf("Enter the price of the book: ");
    scanf("%f", &price);

    printf("Enter the quantity: ");
    scanf("%d", &quantity);

    // Calculate net price with 20% discount
    netPrice = price * quantity * 0.8;

    // Output the details
    printf("\nBook Name: %s", bookName);
    printf("Author Name: %s", authorName);
    printf("Original Price: %.2f\n", price * quantity);
    printf("Net Price after 20%% discount: %.2f\n", netPrice);

    return 0;
}
