#include <stdio.h>
int main() {
    int size, i, j, space;
    printf("Enter size: ");
    scanf("%d", &size);
    for (i = 1; i <= size; i++) {
        for (space = 1; space <= size - i; space++) {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    for (i = size - 1; i >= 1; i--) {
        for (space = 1; space <= size - i; space++) {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}