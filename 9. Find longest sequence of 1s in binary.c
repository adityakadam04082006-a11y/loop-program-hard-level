#include <stdio.h>
int main() {
    int num, maxSeq = 0, currentSeq = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num > 0) {
        while (num > 0) {
            if (num % 2 == 1) {
                currentSeq++;
                if (currentSeq > maxSeq) {
                    maxSeq = currentSeq;
                }
            } else {
                currentSeq = 0;
            }
            num /= 2;
        }
        printf("Longest sequence of 1s: %d\n", maxSeq);
    } else {
        printf("Invalid input\n");
    }
    return 0;
}