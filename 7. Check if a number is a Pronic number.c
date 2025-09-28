#include <stdio.h>
int main() {
    int num, i, isPronic = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num > 0) {
        for (i = 1; i * (i + 1) <= num; i++) {
            if (i * (i + 1) == num) {
                isPronic = 1;
                break;
            }
        }
        if (isPronic) {
            printf("Pronic number\n");
        } else {
            printf("Not a Pronic number\n");
        }
    } else {
        printf("Invalid input\n");
    }
    return 0;
}