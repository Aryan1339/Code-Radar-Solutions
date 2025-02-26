#include <stdio.h>

int main() {
    int n, i, j, space;
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        // Print leading spaces for centering
        for (space = 1; space <= n - i; space++) {
            printf(" ");
        }

        // Print increasing numbers
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // Print decreasing numbers
        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}
