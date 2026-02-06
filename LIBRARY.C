#include <stdio.h>

int main() {
    int choice;
    int totalBooks = 10; // Initial stock
    int issuedBooks = 0;

    while (1) {
        printf("\n--- LIBRARY MANAGEMENT SYSTEM ---\n");
        printf("1. Add New Books (Restock)\n");
        printf("2. Issue a Book\n");
        printf("3. Return a Book\n");
        printf("4. View Library Status\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                int add;
                printf("Enter number of books to add: ");
                scanf("%d", &add);
                if (add > 0) {
                    totalBooks += add;
                    printf("Library restocked successfully.\n");
                }
                break;
            }
            case 2: {
                if (totalBooks > 0) {
                    totalBooks--;
                    issuedBooks++;
                    printf("Book issued successfully!\n");
                } else {
                    printf("Error: No books available to issue.\n");
                }
                break;
            }
            case 3: {
                if (issuedBooks > 0) {
                    totalBooks++;
                    issuedBooks--;
                    printf("Book returned successfully!\n");
                } else {
                    printf("Error: All books are already in the library.\n");
                }
                break;
            }
            case 4:
                printf("\n--- CURRENT STATUS ---\n");
                printf("Available Books: %d\n", totalBooks);
                printf("Books Out on Loan: %d\n", issuedBooks);
                break;

            case 5:
                printf("Exiting system. Goodbye!\n");
                return 0;

            default:
                printf("Invalid choice! Please select 1-5.\n");
        }
    }
    return 0;
}