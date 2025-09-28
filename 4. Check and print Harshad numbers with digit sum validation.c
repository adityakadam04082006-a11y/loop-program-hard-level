#include <stdio.h>
int main() {
    int num, range, original, digit, sum, isValid;
    printf("Enter the range: ");
    scanf("%d", &range);
    if (range > 0) {
        for (num = 1; num <= range; num++) {
            original = num;
            sum = 0;
            isValid = 1;
            while (original > 0) {
                digit = original % 10;
                if (digit == 0) {
                    isValid = 0; // Reject if digit is 0
                    break;
                }
                sum += digit;
                original /= 10;
            }
            if (isValid && num % sum == 0) {
                printf("%d ", num);
            }
        }
        printf("\n");
    } else {
        printf("Invalid range\n");
    }
    return 0;
}