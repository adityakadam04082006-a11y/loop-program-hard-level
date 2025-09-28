#include <stdio.h>
int main() {
    int num, i, j, sum1, sum2;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++) {
        sum1 = 0;
        for (j = 1; j <= i / 2; j++) {
            if (i % j == 0) {
                sum1 += j;
            }
        }
        sum2 = 0;
        for (j = 1; j <= sum1 / 2; j++) {
            if (sum1 % j == 0) {
                sum2 += j;
            }
        }
        if (sum2 == i && i < sum1) {
            printf("Amicable pair: %d and %d\n", i, sum1);
        }
    }
    return 0;
}