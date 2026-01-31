#include <stdio.h>

int main() {
    int i, j;

    // Upper part
    for (i = 1; i <= 3; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    // Lower part
    for (i = 2; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
