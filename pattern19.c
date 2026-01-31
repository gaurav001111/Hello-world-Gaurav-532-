#include <stdio.h>

int main() {
    int i, j, n = 5;   // n should be an odd number

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (j == i || j == (n - i + 1))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}