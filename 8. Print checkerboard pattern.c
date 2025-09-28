#include <stdio.h>
int main() {
    int size, i, j;
    printf("Enter size: ");
    scanf("%d", &size);
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            if ((i + j) % 2 == 0) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}