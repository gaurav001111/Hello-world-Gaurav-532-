#include <stdio.h>

int main() {
    int i, j, n = 3;

    // Upper inverted triangle
    for (i = n; i >= 1; i--) {
        for (j = 0; j < n - i; j++) {
            printf("  ");
        }
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("* ");
        }
        printf("\n");
    }

    // Lower triangle
    for (i = 2; i <= n; i++) {
        for (j = 0; j < n - i; j++) {
            printf("  ");
        }
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
