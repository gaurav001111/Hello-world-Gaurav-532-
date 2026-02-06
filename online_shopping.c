#include <stdio.h>

int main() {
    int choice;
    int cartItems = 0;
    float totalBill = 0.0;
    float pricePerItem = 250.0; // Assume each item costs ₹250

    while (1) {
        printf("\n--- ONLINE SHOPPING SYSTEM ---\n");
        printf("1. Add items to cart\n");
        printf("2. Remove items from cart\n");
        printf("3. View cart details\n");
        printf("4. Checkout and Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                int qty;
                printf("Enter quantity to add: ");
                scanf("%d", &qty);
                if (qty > 0) {
                    cartItems += qty;
                    totalBill += (qty * pricePerItem);
                    printf("%d item(s) added successfully!\n", qty);
                } else {
                    printf("Invalid quantity!\n");
                }
                break;
            }

            case 2: {
                int qty;
                printf("Enter quantity to remove: ");
                scanf("%d", &qty);
                if (qty > 0 && qty <= cartItems) {
                    cartItems -= qty;
                    totalBill -= (qty * pricePerItem);
                    printf("%d item(s) removed successfully!\n", qty);
                } else {
                    printf("Error: Invalid quantity or cart underflow!\n");
                }
                break;
            }

            case 3:
                printf("\n--- CART SUMMARY ---\n");
                printf("Items in Cart: %d\n", cartItems);
                printf("Current Total: ₹%.2f\n", totalBill);
                break;

            case 4:
                printf("Final Amount to Pay: ₹%.2f\n", totalBill);
                printf("Thank you for shopping!\n");
                return 0;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}
