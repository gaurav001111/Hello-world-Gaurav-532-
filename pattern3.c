#include <stdio.h>
int main() {
    int n = 1;
    // Outer loop for rows
    for (int i = 1; i <= 3; i++) {
        // Inner loop for columns
        for (int j = 1; j <= i; j++) {
            printf("%d ", n++);
        }
        printf("\n");
    }
    // To handle the "decreasing" part of the diamond (Pattern 3/5)
    for (int i = 2; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", n++);
        }
        printf("\n");
    }
    return 0;
}